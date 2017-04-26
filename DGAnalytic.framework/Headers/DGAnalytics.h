//
//  DGAnalytics.h
//  DGAnalytic
//
//  Created by Mehmet Akif Şengül on 2.01.2017.
//  Copyright © 2017 Mehmet Akif Şengül. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    DGResponceTime,
    DGAppOpen,
    DGAppClose,
    DGLogoutTimeout,
    DGUserLogin,
    DGUserLogout,
    DGPageOpen,
    DGPageClose,
    DGUserCanNotLogin,
    DGDataNotRetrieved,
    DGBluetoothStatus,
    DGLocationServiceStatus,
    DGWarehouseNotFound,
    DGExternalAccessoryBatteryIsLow,
    DGExternalAccessoryBatteryStatus,
    DGPlayerId,
    DGDeviceCustomName,
}EventType;

typedef enum {
    DGLogLevelOff = 0,
    DGLogLevelBasic,
    DGLogLevelMedium,
    DGLogLevelDebug,
}LogLevel;

@interface DGAnalytics : NSObject
@property (nonatomic) NSString *key;
@property (nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) NSInteger logLevel;
@property (nonatomic) NSString *urlString;

+ (instancetype)initWithKey:(NSString*)key;

+ (void)setSecureUrl:(BOOL)isSecure;

+ (NSString*)getDGAnalyticUUID;

+ (void)setLogLevel:(LogLevel)level;

+ (void)sendEventWithPlayerId:(NSString*)playerId;

+ (void)sendEventWithType:(EventType)type value:(float)value endpoint:(NSString*)enpoint parameters:(NSString*)paramaters
                    response:(NSString*)response extraData:(NSString*)extraData;

+ (void)sendEventWithType:(EventType)type value:(float)value endpoint:(NSString*)enpoint;

+ (void)sendEventWithType:(EventType)type;

+ (void)sendEventWithPageName:(NSString*)pageName;

+ (void)sendEventWithType:(EventType)type endpoint:(NSString*)enpoint parameters:(NSString*)paramaters
                 response:(NSString*)response;

@end
