//
//  NSObject+LGFColor.h
//  AllLife
//
//  Created by mac on 2023/9/14.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (LGFColor)
/// 十六进制字符串获取颜色
/// @param color 16进制色值  支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithHexString:(NSString *)color;

/// 十六进制字符串获取颜色
/// @param color 16进制色值  支持@“#123456”、 @“0X123456”、 @“123456”三种格式
/// @param alpha 透明度
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

/// 适配暗黑模式颜色   传入的UIColor对象
/// @param lightColor 普通模式颜色
/// @param darkColor 暗黑模式颜色
+ (UIColor *)colorWithLightColor:(UIColor *)lightColor DarkColor:(UIColor *)darkColor;

/// 适配暗黑模式颜色   颜色传入的是16进制字符串
/// @param lightColor 普通模式颜色
/// @param darkColor 暗黑模式颜色
+ (UIColor *)colorWithLightColorStr:(NSString *)lightColor DarkColor:(NSString *)darkColor;

/// 适配暗黑模式颜色   颜色传入的是16进制字符串 还有颜色的透明度
/// @param lightColor 普通模式颜色
/// @param lightAlpha 普通模式颜色透明度
/// @param darkColor 暗黑模式颜色透明度
/// @param darkAlpha 暗黑模式颜色
+ (UIColor *)colorWithLightColorStr:(NSString *)lightColor WithLightColorAlpha:(CGFloat)lightAlpha DarkColor:(NSString *)darkColor WithDarkColorAlpha:(CGFloat)darkAlpha;
/**
 *  导航条颜色
 */
+ (UIColor *)appNavigationBarColor;

/**
 *  app蓝色
 */
+ (UIColor *)appBlueColor;

/**
 *  app红色
 */
+ (UIColor *)appRedColor;

/**
 *  app黄色
 */
+ (UIColor *)appYellowColor;

/**
 *  app橙色
 */
+ (UIColor *)appOrangeColor;

/**
 *  app绿色
 */
+ (UIColor *)appGreenColor;

/**
 *  app背景色
 */
+ (UIColor *)appBackGroundColor;
/**
 *  app主题颜色
 * */
+ (UIColor *)appMainColor;

/**
 *  app直线颜色
 */
+ (UIColor *)appLineColor;
//app导航栏文字颜色

+ (UIColor *)appNavTitleColor;
/**
 *  app标题颜色
 */
+ (UIColor *)appTitleColor;

/**
 *  app文字颜色
 */
+ (UIColor *)appTextColor;

/**
 *  app浅红色颜色
 */
+ (UIColor *)appLightRedColor;

/**
 *  app输入框颜色
 */
+ (UIColor *)appTextFieldColor;

/**
 *  app黑色颜色
 */
+ (UIColor *)appBlackColor;


/**
 *  app次分割线
 */
+ (UIColor *)appSecondLineColor;
/**
 *  @brief  随机颜色
 *
 *  @return UIColor
 */
+ (UIColor *)RandomColor;

/**
 *  @brief  渐变颜色
 *
 *  @param c1     开始颜色
 *  @param c2     结束颜色
 *  @param height 渐变高度
 *
 *  @return 渐变颜色
 */
+ (UIColor*)gradientFromColor:(UIColor*)c1 toColor:(UIColor*)c2 withHeight:(int)height;
@end

NS_ASSUME_NONNULL_END
