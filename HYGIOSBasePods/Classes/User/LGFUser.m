//
//  LGFUser.m
//  AllLife
//
//  Created by mac on 2023/9/14.
//

#import "LGFUser.h"
#import "NSUserDefaults+SafeAccess.h"
#import "YYModel.h"
#import "NSDictionary+Additions.h"


@implementation LGFUser
+ (instancetype)userFromSandbox;
{
    LGFUser *user = [LGFUser yy_modelWithDictionary:[NSUserDefaults dictionaryForKey:@"uesrInfo"]];
    return user;
}
+ (void)cleanUserInSandbox
{
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:@"uesrInfo"];
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:@"token"];
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:@"payToken"];
    [[NSUserDefaults standardUserDefaults] synchronize];
}
+(void)updateWith:(LGFUser *)value{
    [NSUserDefaults setObject:[value yy_modelToJSONObject] forKey:@"uesrInfo"];
}
- (BOOL)saveUserInfo
{
    [NSUserDefaults setObject:[self yy_modelToJSONObject] forKey:@"uesrInfo"];
    NSArray *userArr = [[NSUserDefaults standardUserDefaults] objectForKey:@"loginUser"];
    NSMutableArray *tempArr = nil;
    if (userArr) {
        BOOL isHave  = NO;
        tempArr = [[NSMutableArray alloc] initWithArray:userArr];
        for (int i=0 ;i<tempArr.count;i++) {
            NSDictionary *dic = tempArr[i];
            if ([[dic stringValueForKey:@"tel" defaultValue:@""] isEqualToString:self.tel]) {
                isHave = YES;
                //更新
                [tempArr replaceObjectAtIndex:i withObject:@{
                    @"name":self.name,
                    @"tel":self.tel,
                    @"headUrl":self.avatar,
                    @"loginPws":self.loginPws
                }];
            }
        }
        if(!isHave){
            //add
            [tempArr addObject:@{
                @"name":self.name,
                @"tel":self.tel,
                @"headUrl":self.avatar,
                @"loginPws":self.loginPws
            }];
        }
    }else{
        tempArr = [[NSMutableArray alloc] init];
        [tempArr addObject:@{
            @"name":self.name,
            @"tel":self.tel,
            @"headUrl":self.avatar,
            @"loginPws":self.loginPws
        }];
    }
    [NSUserDefaults setObject:[[tempArr reverseObjectEnumerator] allObjects] forKey:@"loginUser"];
    return [[NSUserDefaults standardUserDefaults] synchronize];
}
- (void)loginOut
{
    
}
@end
