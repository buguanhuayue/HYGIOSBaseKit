//
//  NSDictionary+Additions.h
//  AllLife
//
//  Created by mac on 2023/9/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (Additions)
- (BOOL)boolValueForKey:(NSString *)key defaultValue:(BOOL)defaultValue;
- (NSInteger)integerValueForKey:(NSString *)key defaultValue:(NSInteger)defaultValue;
- (CGFloat)floatValueForKey:(NSString*)key defaultValue:(CGFloat)defaultValue;
- (time_t)timeValueForKey:(NSString *)key defaultValue:(time_t)defaultValue;
- (long long)longLongValueValueForKey:(NSString *)key defaultValue:(long long)defaultValue;
- (NSString *)stringValueForKey:(NSString *)key defaultValue:(NSString *)defaultValue;
- (NSArray *)arrayValueForKey:(NSString *)key defaultValue:(NSArray *)defaultValue;
- (NSDictionary *)dictionaryValueForKey:(NSString *)key defaultValue:(NSDictionary *)defaultValue;
- (NSString *)welfareCenterStringValueForKey:(NSString *)key defaultValue:(NSString *)defaultValue;
@end

NS_ASSUME_NONNULL_END
