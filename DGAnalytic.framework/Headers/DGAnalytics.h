//
//  DGAnalytics.h
//  DGAnalytic
//
//  Created by Dijital Garaj on 2.01.2017.
//  Copyright © 2017 Dijital Garaj. All rights reserved.
//  Version 1.0.7

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
@property (nonatomic) BOOL checkUpdates;
@property (nonatomic) NSInteger logLevel;
@property (nonatomic) NSString *urlString;


+ (instancetype)initWithKey:(NSString*)key;

+ (void)setSecureUrl:(BOOL)isSecure;

+ (void)checkUpdates:(BOOL)check;

+ (void)setLogLevel:(LogLevel)level;

+ (NSString*)getDGAnalyticUUID;

+ (void)sendUsername:(NSString*)username;

+ (void)sendWarehouse:(NSString*)warehouse;

+ (void)sendError:(NSString*)error;

+ (void)sendDeviceName:(NSString*)deviceName;

+ (void)sendEventWithPlayerId:(NSString*)playerId;

+ (void)sendEventWithPageName:(NSString*)pageName;

+ (void)sendUserLoginEventWithParameters:(NSString*)parameters response:(NSString*)response;

+ (void)sendUserLoginEventWithParameters:(NSString*)parameters response:(NSString*)response username:(NSString*)username;

+ (void)sendUserLoginEventWithParameters:(NSString*)parameters response:(NSString*)response username:(NSString*)username warehouse:(NSString*)warehouse;

+ (void)sendUserCanNotLoginEventWithParameters:(NSString*)parameters response:(NSString*)response;

+ (void)sendUserCanNotLoginEventWithParameters:(NSString*)parameters response:(NSString*)response error:(NSString*)error;

+ (void)sendLocationServiceStatusEventWithValue:(NSInteger)value;

+ (void)sendExternalAccessoryBatteryIsLowEvent;

+ (void)sendBluetoothStatusEventWithValue:(NSInteger)value;

+ (void)sendUserLogoutEvent;

+ (void)sendDeviceCustomName:(NSString*)deviceCustomName;

+ (void)sendExternalAccessoryBatteryStatusWithValue:(NSInteger)value;

+ (void)sendAppOpenEventWithDeviceName:(NSString*)deviceName;

+ (void)sendAppCloseEvent;

+ (void)sendAppOpenEvent;

+ (void)sendDataNotRetrievedEventWithEndpoint:(NSString*)endpoint parameters:(NSString*)parameters response:(NSString*)response;

//+ (void)sendRequestStartTime:(NSDate*)startDate endpoint:(NSString*)endpoint;

//+ (void)sendRequestEndTime:(NSDate*)finishDate endpoint:(NSString*)endpoint parameters:(NSString*)parameters response:(NSString*)response;

+ (void)sendEventWithType:(EventType)type value:(float)value endpoint:(NSString*)enpoint parameters:(NSString *)paramaters response:(NSString *)response;

/*
+ (void)sendEventWithType:(EventType)type value:(float)value endpoint:(NSString*)enpoint parameters:(NSString*)paramaters
                    response:(NSString*)response extraData:(NSString*)extraData;

+ (void)sendEventWithType:(EventType)type;


+ (void)sendEventWithType:(EventType)type endpoint:(NSString*)enpoint parameters:(NSString*)paramaters
                 response:(NSString*)response;
*/


@end
