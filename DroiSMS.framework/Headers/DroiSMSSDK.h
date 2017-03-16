//
//  DroiSMSSDK.h
//  DroiSMSSDK
//
//  Created by Jon on 2017/3/8.
//  Copyright © 2017年 droi. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^DroiSMSResultBlock)(BOOL result,NSError *error);
@interface DroiSMSSDK : NSObject

/**
 获取验证码
 @param phoneNum 手机号码
 @param templateStr 验证码模板名称，需要在 BaaS web 后台设置
 @param callback 回调 block
 */
+ (void)getSMSCodeWithPhoneNum:(NSString *)phoneNum template:(NSString *)templateStr  callback:(DroiSMSResultBlock)callback;

/**
 获取验证码
 @param countryCode 国家区号 如果为 nil 或者空字符串默认为86
 @param phoneNum 手机号码
 @param templateStr 验证码模板名称，需要在 BaaS web 后台设置
 @param extra 额外参数
 @param callback 回调 block
 */
+ (void)getSMSCodeWithCountry:(NSString *)countryCode phoneNum:(NSString *)phoneNum template:(NSString *)templateStr extra:(NSDictionary *)extra callback:(DroiSMSResultBlock)callback;

/**
 验证验证码
 @param code 验证码
 @param phoneNum 手机号
 @param callback 回调 block
 */
+ (void)verifySMSCode:(NSString *)code phoneNum:(NSString *)phoneNum callback:(DroiSMSResultBlock)callback;

/**
 验证验证码
 @param code 验证
 @param countryCode 国家区号 如果为 nil 或者空字符串默认为86
 @param phoneNum 手机
 @param callback  回调 block
 */
+ (void)verifySMSCode:(NSString *)code countryCode:(NSString *)countryCode phoneNum:(NSString *)phoneNum callback:(DroiSMSResultBlock)callback;

/**
 获取 SDK 版本号
 */
+ (NSString *)getVersion;
@end
