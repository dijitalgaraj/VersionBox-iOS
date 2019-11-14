//
//  VersionBox.h
//  VersionBox
//
//  Created by Mehmet Akif Şengül on 19.08.2019.
//  Copyright © 2019 Dijital Garaj. All rights reserved.
//  2.0.5

#import <Foundation/Foundation.h>
#import "Enums.h"

NS_ASSUME_NONNULL_BEGIN

@interface VersionBox : NSObject

+ (void)initWithKey:(NSString*)key;

+ (void)initWithKey:(NSString *)key pingRange:(int)range;

+ (void)setLogLevel:(LogLevel)level;

+ (NSString*)getUUID;

+ (void)appOpen;

+ (void)pageOpen:(NSString*)pageName;

+ (void)sendErrorWithType:(ErrorType)type message:(nullable NSString*)message;

+ (void)sendErrorWithKey:(NSString*)key message:(nullable NSString*)message;

+ (void)userLoginWithUserInfoType:(UserInfoType)type userInfo:(NSString*)userInfo message:(nullable NSString*)message;

+ (void)userLogout;

+ (void)sendActionWithType:(ActionType)type message:(nullable NSString*)message;

+ (void)sendActionWithKey:(NSString*)key message:(nullable NSString*)message;

+ (void)setDeviceMetadataWithType:(MetadataType)type value:(NSString*)value;

+ (void)beaconDetected:(NSString*)uuid major:(NSString*)major minor:(NSString*)minor regionName:(NSString*)regionName;

@end

NS_ASSUME_NONNULL_END
