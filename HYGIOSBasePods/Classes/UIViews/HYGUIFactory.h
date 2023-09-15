//
//  HYGUIFactory.h
//  AllLife
//
//  Created by mac on 2023/9/15.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@class UILabel,UIButton,UITextField,UIImageView,UITableView;

@interface HYGUIFactory : NSObject
#pragma mark---UILabel

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor;

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor
                     alignment:(NSTextAlignment)alignment;

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor
                     alignment:(NSTextAlignment)alignment
                        radius:(CGFloat)radius;

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor
                     alignment:(NSTextAlignment)alignment
                        radius:(CGFloat)radius
                   borderColor:(UIColor *)bColor
                   borderWidth:(CGFloat)bWidth;

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor
                     alignment:(NSTextAlignment)alignment
                         lines:(NSInteger)lines;

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor
                     alignment:(NSTextAlignment)alignment
                         lines:(NSInteger)lines
                     breakMode:(NSLineBreakMode)breakMode;

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor
                          text:(NSString *)text;

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor
                     alignment:(NSTextAlignment)alignment
                          text:(NSString *)text;

+ (UILabel *)labelWithFontSize:(CGFloat)fontSize
                     textColor:(UIColor *)textColor
                     alignment:(NSTextAlignment)alignment
                         lines:(NSInteger)lines
                     breakMode:(NSLineBreakMode)breakMode
                          text:(NSString *)text;

#pragma mark---UIButton

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                        title:(NSString *)title;

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                        title:(NSString *)title
                        image:(UIImage *)image;

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                        title:(NSString *)title
                    backColor:(UIColor *)backColor;

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                  hTitleColor:(UIColor *)hTitleColor
                        title:(NSString *)title
                    backColor:(UIColor *)backColor;

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                  hTitleColor:(UIColor *)hTitleColor
                        title:(NSString *)title
                    backColor:(UIColor *)backColor
                       radius:(CGFloat)radius;

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                  hTitleColor:(UIColor *)hTitleColor
                        title:(NSString *)title
                    backColor:(UIColor *)backColor
                       radius:(CGFloat)radius
                  borderColor:(UIColor *)bColor
                  borderWidth:(CGFloat)bWidth;

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                  hTitleColor:(UIColor *)hTitleColor
                        title:(NSString *)title
                        image:(UIImage *)image
                    backImage:(UIImage *)backImage;

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                  hTitleColor:(UIColor *)hTitleColor
                        title:(NSString *)title
                        image:(UIImage *)image
                   nBackImage:(UIImage *)nBackImage
                   hBackImage:(UIImage *)hBackImage;

+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                  hTitleColor:(UIColor *)hTitleColor
                  dTitleColor:(UIColor *)dTitleColor
                        title:(NSString *)title
                        image:(UIImage *)image
                    backColor:(UIColor *)backColor
                   nBackImage:(UIImage *)nBackImage
                   hBackImage:(UIImage *)hBackImage
                   dBackImage:(UIImage *)dBackImage;
+ (UIButton *)btnWithFontSize:(CGFloat)fontSize
                  nTitleColor:(UIColor *)nTitleColor
                        title:(NSString *)title
                    backImage:(UIImage *)image;

#pragma mark---UITextFiled

+ (UITextField *)textFieldWithFont:(CGFloat)fontSize
                       placeholder:(NSString *)holder
                         textColor:(UIColor *)textColor
                         tintColor:(UIColor *)tintColor;

+ (UITextField *)textFieldWithFont:(CGFloat)fontSize
                       placeholder:(NSString *)holder
                         textColor:(UIColor *)textColor
                         tintColor:(UIColor *)tintColor
                         alignment:(NSTextAlignment)alignment
                         clearMode:(UITextFieldViewMode)clearMode
                     autoCrrection:(UITextAutocorrectionType)correctionType
                       autoCapital:(UITextAutocapitalizationType)capitalType;

#pragma mark---UIImageView

+ (UIImageView *)imageViewWithImageName:(NSString *)name
                                  frame:(CGRect)frame;

+ (UIImageView *)imageViewWithRadius:(CGFloat)radius;

+ (UIImageView *)imageViewWithRadius:(CGFloat)radius
                         borderWidth:(CGFloat)bWidth
                         borderColor:(UIColor *)bColor;
+(UIButton *)btnWithImage:(NSString *)image;
#pragma mark---UITableView

+ (UITableView *)tableWithFrame:(CGRect)frame
                          style:(UITableViewStyle)style
                      cellClass:(NSArray *)className
                       delegate:(id <UITableViewDelegate>)delegate
                     dataSource:(id <UITableViewDataSource>)dataSource;

+ (UITableView *)tableWithFrame:(CGRect)frame
                          style:(UITableViewStyle)style
                      backColor:(UIColor *)backColor
                 separatorColor:(UIColor *)separatorColor
                      cellClass:(NSArray *)className
                       delegate:(id <UITableViewDelegate>)delegate
                     dataSource:(id <UITableViewDataSource>)dataSource;
@end

NS_ASSUME_NONNULL_END
