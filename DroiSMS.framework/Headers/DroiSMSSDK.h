//
//  DroiSMSSDK.h
//  DroiSMSSDK
//
//  Created by Jon on 2017/3/8.
//  Copyright © 2017年 droi. All rights reserved.
//

#import <Foundation/Foundation.h>
@class DroiError;
typedef void (^DroiSMSResultBlock)(BOOL result,NSError *error);
@interface DroiSMSSDK : NSObject

/**初始化 SDK
 @param APIKey 在 DroiBaaS 官网上面申请的 SDK 对应的 APIKey
 */
+ (BOOL)initializeWithAPIKey:(NSString *)APIKey;

/**请求获取验证码 同步方法
 @param countryCode 国家码 默认为 86
 @param phoneNum 手机号
 @param templateStr 验证码模板名称，需要在 DroiBaaS web 控制台设置
 @param extra 额外参数 非必填可为 nil
 @param error  错误信息
 @return 返回结果
 */
+ (BOOL)getSMSCodeWithCountry:(NSString *)countryCode phoneNum:(NSString *)phoneNum template:(NSString *)templateStr extra:(NSDictionary *)extra error:(DroiError**) error;

/**请求获取验证码 异步方法
 @param countryCode 国家码 默认为 86
 @param phoneNum 手机号
 @param templateStr 验证码模板名称，需要在 DroiBaaS web 控制台设置
 @param extra 额外参数 非必填可为 nil
 @param callback 回调 block
 */
+ (void)getSMSCodeWithCountry:(NSString *)countryCode phoneNum:(NSString *)phoneNum template:(NSString *)templateStr extra:(NSDictionary *)extra callback:(void(^)(BOOL result, DroiError *error))callback;

/**验证验证码 同步方法
 @param code 验证码
 @param countryCode 国家区号 如果为 nil 或者空字符串默认为86
 @param phoneNum 手机号
 @param error 错误信息
 @return 返回结果
 */
+ (BOOL)verifySMSCode:(NSString *)code countryCode:(NSString *)countryCode phoneNum:(NSString *)phoneNum error:(DroiError**) error;

/**验证验证码 异步方法
 @param code 验证码
 @param countryCode 国家区号 如果为 nil 或者空字符串默认为86
 @param phoneNum 手机号
 @param callback 回调 block
 */
+ (void)verifySMSCode:(NSString *)code countryCode:(NSString *)countryCode phoneNum:(NSString *)phoneNum callback:(void(^)(BOOL result, DroiError *error))callback;


/**
 获取 SDK 版本号
 */
+ (NSString *)getVersion;
@end
