//
//  PrivacyManager.h
//  PrivacyManager
//
//  Created by 黄震 on 2018/3/15.
//  Copyright © 2018年 CocoaJason. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EventKit/EventKit.h>//日历备忘录

typedef void(^ReturnBlock)(BOOL isOpen);

@interface HZPrivacyManager : NSObject
//是否开启定位
+ (void)openLocationServiceWithBlock:(ReturnBlock)returnBlock;
//是否允许消息推送
+ (void)openMessageNotificationServiceWithBlock:(ReturnBlock)returnBlock;
//是否开启摄像头
+ (void)openCaptureDeviceServiceWithBlock:(ReturnBlock)returnBlock;
//是否开启相册
+ (void)openAlbumServiceWithBlock:(ReturnBlock)returnBlock;
//是否开启麦克风
//+ (void)openRecordServiceWithBlock:(ReturnBlock)returnBlock;
//是否开启通讯录
+ (void)openContactsServiceWithBolck:(ReturnBlock)returnBolck;
//是否开启蓝牙
//+ (void)openPeripheralServiceWithBolck:(ReturnBlock)returnBolck;
//是否开启日历备忘录
+ (void)openEventServiceWithBolck:(ReturnBlock)returnBolck withType:(EKEntityType)entityType;
//是否开启互联网
+ (void)openEventServiceWithBolck:(ReturnBlock)returnBolck;
//是否开启健康
+ (void)openHealthServiceWithBolck:(ReturnBlock)returnBolck;
// 是否开启Touch ID
+ (void)openTouchIDServiceWithBlock:(ReturnBlock)returnBlock;
//是否开启Apple Pay
+ (void)openApplePayServiceWithBlock:(ReturnBlock)returnBlock;
//是否开启语音识别
+ (void)openSpeechServiceWithBlock:(ReturnBlock)returnBlock;
//是否开启媒体资料库
+ (void)openMediaPlayerServiceWithBlock:(ReturnBlock)returnBlock;
//是否开启Siri
+ (void)openSiriServiceWithBlock:(ReturnBlock)returnBlock;

@end
