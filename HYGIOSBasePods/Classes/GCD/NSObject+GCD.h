//
//  NSObject+GCD.h
//  AllLife
//
//  Created by mac on 2023/9/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (GCD)
/**
 *  @brief  异步执行代码块
 *
 *  @param block 代码块
 */
- (void)performAsynchronous:(void(^)(void))block;
/**
 *  @brief  GCD主线程执行代码块
 *
 *  @param block 代码块
 *  @param shouldWait  是否同步请求
 */
- (void)performOnMainThread:(void(^)(void))block wait:(BOOL)shouldWait;

/**
 *  @brief  延迟执行代码块
 *
 *  @param seconds 延迟时间 秒
 *  @param block   代码块
 */
- (void)performAfter:(NSTimeInterval)seconds block:(void(^)(void))block;
@end

NS_ASSUME_NONNULL_END
