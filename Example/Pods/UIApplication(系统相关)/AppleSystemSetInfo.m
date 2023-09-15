//
//  AppleSystemSetInfo.m
//  AllLife
//
//  Created by mac on 2023/9/14.
//

#import "AppleSystemSetInfo.h"

@implementation AppleSystemSetInfo
+ (void)directPhoneCallWithPhoneNum:(NSString *)phoneNum {
    
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:[@"tel:" stringByAppendingString:phoneNum]] options:@{} completionHandler:^(BOOL success) {
        
    }];
}

+ (void)phoneCallWithPhoneNum:(NSString *)phoneNum contentView:(UIView *)view {
    
    WKWebView * callWebview = [[WKWebView alloc] init];
    [callWebview loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:[@"tel:" stringByAppendingString:phoneNum]]]];
    [view addSubview:callWebview];
}

+ (void)jumpToAppReviewPageWithAppId:(NSString *)appId {

    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:[@"itms-apps://itunes.apple.com/WebObjects/MZStore.woa/wa/viewContentsUserReviews?type=Purple+Software&id=" stringByAppendingString:appId]] options:@{} completionHandler:^(BOOL success) {
           
       }];
}

+ (void)sendEmailToAddress:(NSString *)address {

    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:[@"mailto://" stringByAppendingString:address]] options:@{} completionHandler:^(BOOL success) {
        
    }];
}

+ (NSString *)appVersion {

    return [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
}

+ (UIImage *)launchImage {

    UIImage               *lauchImage      = nil;
    NSString              *viewOrientation = nil;
    CGSize                 viewSize        = [UIScreen mainScreen].bounds.size;
    UIInterfaceOrientation orientation     = [[UIApplication sharedApplication] statusBarOrientation];
    if (orientation == UIInterfaceOrientationLandscapeLeft || orientation == UIInterfaceOrientationLandscapeRight) {
        viewOrientation = @"Landscape";
    } else {
        viewOrientation = @"Portrait";
    }
    NSArray *imagesDictionary = [[[NSBundle mainBundle] infoDictionary] valueForKey:@"UILaunchImages"];
    for (NSDictionary *dict in imagesDictionary) {
        CGSize imageSize = CGSizeFromString(dict[@"UILaunchImageSize"]);
        if (CGSizeEqualToSize(imageSize, viewSize) && [viewOrientation isEqualToString:dict[@"UILaunchImageOrientation"]]) {
            lauchImage = [UIImage imageNamed:dict[@"UILaunchImageName"]];
        }
    }
    return lauchImage;
}


@end
