//
//  AppleSystemSetInfo.h
//  AllLife
//
//  Created by mac on 2023/9/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface AppleSystemSetInfo : NSObject
/**
 *  直接拨打电话
 *
 *  @param phoneNum 电话号码
 */
+ (void)directPhoneCallWithPhoneNum:(NSString *)phoneNum;

/**
 *  弹出对话框并询问是否拨打电话
 *
 *  @param phoneNum 电话号码
 *  @param view     contentView
 */
+ (void)phoneCallWithPhoneNum:(NSString *)phoneNum contentView:(UIView *)view;

/**
 *  跳到app的评论页
 *
 *  @param appId APP的id号
 */
+ (void)jumpToAppReviewPageWithAppId:(NSString *)appId;

/**
 *  发邮件
 *
 *  @param address 邮件地址
 */
+ (void)sendEmailToAddress:(NSString *)address;

/**
 *  app版本号
 *
 *  @return app版本号
 */
+ (NSString *)appVersion;

/**
 *  获取启动页图片
 *
 *  @return 启动页图片
 */
+ (UIImage *)launchImage;

@end

NS_ASSUME_NONNULL_END
