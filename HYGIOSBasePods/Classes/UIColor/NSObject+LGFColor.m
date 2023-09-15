//
//  NSObject+LGFColor.m
//  AllLife
//
//  Created by mac on 2023/9/14.
//

#import "NSObject+LGFColor.h"

@implementation NSObject (LGFColor)
///十六进制字符串获取颜色
/// @param color 16进制色值  支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithHexString:(NSString *)color{
    return [self colorWithHexString:color alpha:1.0f];
}


/// 十六进制字符串获取颜色
/// @param color 16进制色值  支持@“#123456”、 @“0X123456”、 @“123456”三种格式
/// @param alpha 透明度
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha{
    //删除字符串中的空格
    NSString *cString = [[color stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    // String should be 6 or 8 characters
    if ([cString length] < 6){
        return [UIColor clearColor];
    }
    // strip 0X if it appears
    //如果是0x开头的，那么截取字符串，字符串从索引为2的位置开始，一直到末尾
    if ([cString hasPrefix:@"0X"]){
        cString = [cString substringFromIndex:2];
    }
    //如果是#开头的，那么截取字符串，字符串从索引为1的位置开始，一直到末尾
    if ([cString hasPrefix:@"#"]){
        cString = [cString substringFromIndex:1];
    }
    if ([cString length] != 6){
        return [UIColor clearColor];
    }
    
    // Separate into r, g, b substrings
    NSRange range;
    range.location = 0;
    range.length = 2;
    //r
    NSString *rString = [cString substringWithRange:range];
    //g
    range.location = 2;
    NSString *gString = [cString substringWithRange:range];
    //b
    range.location = 4;
    NSString *bString = [cString substringWithRange:range];
     // Scan values
    unsigned int r, g, b;
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    return [UIColor colorWithRed:((float)r / 255.0f) green:((float)g / 255.0f) blue:((float)b / 255.0f) alpha:alpha];
}


/// 适配暗黑模式颜色   传入的UIColor对象
/// @param lightColor 普通模式颜色
/// @param darkColor 暗黑模式颜色
+ (UIColor *)colorWithLightColor:(UIColor *)lightColor DarkColor:(UIColor *)darkColor {
    if (@available(iOS 13.0, *)) {
        return [UIColor colorWithDynamicProvider:^UIColor * _Nonnull(UITraitCollection * _Nonnull trainCollection) {
            if ([trainCollection userInterfaceStyle] == UIUserInterfaceStyleLight) {
                return lightColor;
            } else {
                return darkColor;
            }
        }];
    } else {
        return lightColor ? lightColor : (darkColor ? darkColor : [UIColor clearColor]);
    }
}

/// 适配暗黑模式颜色   颜色传入的是16进制字符串
/// @param lightColor 普通模式颜色
/// @param darkColor 暗黑模式颜色
+ (UIColor *)colorWithLightColorStr:(NSString *)lightColor DarkColor:(NSString *)darkColor{
    return [UIColor colorWithLightColor:[UIColor colorWithHexString:lightColor] DarkColor:[UIColor colorWithHexString:darkColor]];
}


/// 适配暗黑模式颜色   颜色传入的是16进制字符串 还有颜色的透明度
/// @param lightColor 普通模式颜色
/// @param lightAlpha 普通模式颜色透明度
/// @param darkColor 暗黑模式颜色透明度
/// @param darkAlpha 暗黑模式颜色
+ (UIColor *)colorWithLightColorStr:(NSString *)lightColor WithLightColorAlpha:(CGFloat)lightAlpha DarkColor:(NSString *)darkColor WithDarkColorAlpha:(CGFloat)darkAlpha{
    return [UIColor colorWithLightColor:[UIColor colorWithHexString:lightColor alpha:lightAlpha] DarkColor:[UIColor colorWithHexString:darkColor alpha:darkAlpha]];
}
// 主色调
+(UIColor *)appMainColor{

    return [self colorWithHexString:@"#323542"];
}
//导航条颜色
+ (UIColor *)appNavigationBarColor{
    return [UIColor colorWithHexString:@"#323542"];
}

//app蓝色
+ (UIColor *)appBlueColor{
    return [UIColor colorWithHexString:@"#7687f1"];
}

//app红色
+ (UIColor *)appRedColor{
    return [UIColor colorWithHexString:@"#ff415b"];
}

//app黄色
+ (UIColor *)appYellowColor{
    return [UIColor colorWithHexString:@"#f7ba5b"];
}


//app橙色
+ (UIColor *)appOrangeColor{
    return [UIColor colorWithHexString:@"#ea6644"];
}

//app绿色
+ (UIColor *)appGreenColor{
    return [UIColor colorWithHexString:@"#52cbb9"];
}

//app背景色
+ (UIColor *)appBackGroundColor{
    return [UIColor colorWithHexString:@"#e6e6e6"];
}

//app直线色
+ (UIColor *)appLineColor{
//    return [UIColor colorWithHexString:@"#c8c8c8"];
    return [UIColor colorWithHexString:@"#D6D6D6"];
}
//app导航栏文字颜色
+ (UIColor *)appNavTitleColor{
    return [UIColor colorWithHexString:@"#013e5d"];
}
//app标题颜色
+ (UIColor *)appTitleColor{
    return [UIColor colorWithHexString:@"#474747"];
}

//app文字颜色
+ (UIColor *)appTextColor{
    return [UIColor colorWithHexString:@"#A0A0A0"];
}

//app浅红颜色
+ (UIColor *)appLightRedColor{
    return [UIColor colorWithHexString:@"#FFB7C1"];
}

//app输入框颜色
+ (UIColor *)appTextFieldColor{
    return [UIColor colorWithHexString:@"#FFFFFF"];
}

//app黑色色
+ (UIColor *)appBlackColor{
    return [UIColor colorWithHexString:@"#333d47" ];
}
/**
 *  app次分割线
 */
+ (UIColor *)appSecondLineColor{
     return [UIColor colorWithHexString:@"#e5e5e5"];
}

+ (UIColor *)RandomColor {
    NSInteger aRedValue = arc4random() % 255;
    NSInteger aGreenValue = arc4random() % 255;
    NSInteger aBlueValue = arc4random() % 255;
    UIColor *randColor = [UIColor colorWithRed:aRedValue / 255.0f green:aGreenValue / 255.0f blue:aBlueValue / 255.0f alpha:1.0f];
    return randColor;
}

/**
 *  @brief  渐变颜色
 *  @param c1     开始颜色
 *  @param c2     结束颜色
 *  @param height 渐变高度
 *  @return 渐变颜色
 */
+ (UIColor*)gradientFromColor:(UIColor*)c1 toColor:(UIColor*)c2 withHeight:(int)height
{
    CGSize size = CGSizeMake(1, height);
    UIGraphicsBeginImageContextWithOptions(size, NO, 0);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGColorSpaceRef colorspace = CGColorSpaceCreateDeviceRGB();
    
    NSArray* colors = [NSArray arrayWithObjects:(id)c1.CGColor, (id)c2.CGColor, nil];
    CGGradientRef gradient = CGGradientCreateWithColors(colorspace, (__bridge CFArrayRef)colors, NULL);
    CGContextDrawLinearGradient(context, gradient, CGPointMake(0, 0), CGPointMake(0, size.height), 0);
    
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    
    CGGradientRelease(gradient);
    CGColorSpaceRelease(colorspace);
    UIGraphicsEndImageContext();
    
    return [UIColor colorWithPatternImage:image];
}

@end
