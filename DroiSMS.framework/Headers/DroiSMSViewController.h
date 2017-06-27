//
//  DroiSMSViewController.h
//  DroiSMSSDK
//
//  Created by Jon on 2017/3/9.
//  Copyright © 2017年 droi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^DroiSMSViewControllerCallback)(NSString *countryCode,NSString *phoneNum,BOOL result);
@interface DroiSMSViewController : UIViewController

/**
 初始化短信验证 UI界面
 @param template 验证码模板名称，需要在 BaaS web 后台设置
 @param callback 回调 block
 @return ViewController 对象
 */
- (id)initWithTemplate:(NSString *)template callback:(DroiSMSViewControllerCallback) callback;

/**
 初始化短信验证 已填入手机号的UI界面，此界面手机号不可修改
 @param template 验证码模板名称，需要在 BaaS web 后台设置
 @param countryCode 国家区号 如果为 nil 或者空字符串默认为86
 @param phoneNum 手机号
 @param callback 回调 block
 @return ViewController 对象
 */
- (id)initWithTemplate:(NSString *)template  countryCode:(NSString *)countryCode phoneNum:(NSString *)phoneNum callback:(DroiSMSViewControllerCallback) callback;

/**
 设置界面的图片
 @param image 图片对象
 */
- (void)setImage:(UIImage *)image;

@end
