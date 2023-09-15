//
//  LGFUser.h
//  AllLife
//
//  Created by mac on 2023/9/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LGFUser : NSObject
@property (nonatomic,copy)NSString *name; //    用户名称，已经用了很多了，把nickname 值赋给这个
@property (nonatomic,copy)NSString *uid;   // 用户id
@property (nonatomic,copy)NSString *tel;   // string   手机号
@property (nonatomic,copy)NSString *userSig;  // im登录使用
@property (nonatomic,copy)NSString *allowTelFind;//允许手机号查找
@property (nonatomic,copy)NSString *allowUidFind;//允许uid查找
@property (nonatomic,copy)NSString *requireAdditionVerify;//需要添加好友验证
@property (nonatomic,copy)NSString *allowDirectJoinGroup;//允许被直接加到群聊
@property (nonatomic,copy)NSString *nickname;//用户昵称
@property (nonatomic,copy)NSString *avatar;   // string    否    头像图片地址
@property (nonatomic,copy)NSString *firstLetter;//首字母
@property (nonatomic,copy)NSString *realName;//真实姓名
@property (nonatomic,copy)NSString *sex;   //string    性别
@property (nonatomic,copy)NSString *loginDeviceId;    //登陆设备id
@property (nonatomic,copy)NSString *birthday;    //生日
@property (nonatomic,copy)NSString *region;    //区域
@property (nonatomic,copy)NSString *token;
@property (nonatomic,copy)NSString *cardNum;
@property (nonatomic,copy)NSString *hasPayPws;
@property (nonatomic,copy)NSString *loginPws;
@property (nonatomic,copy)NSString *authState;/**
                                                * 认证状态
                                                * nothing 未认证
                                                * realAuth  实名认证
                                                * payAuth  支付认证
                                                */
@end

NS_ASSUME_NONNULL_END
