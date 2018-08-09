//
//  VersionBox.h
//  VersionBox
//
//  Created by Dijital Garaj on 2.01.2017.
//  Copyright © 2017 Dijital Garaj. All rights reserved.
//  Version 1.0.20

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
    DGBeaconDetected,
}EventType;


typedef enum {
    DGLogLevelOff = 0,
    DGLogLevelBasic,
    DGLogLevelMedium,
    DGLogLevelDebug,
}LogLevel;


@interface VersionBox : NSObject

+ (id)sharedController;

+ (instancetype)initWithKey:(NSString*)key;

+ (void)saveStoreUserID:(NSString*)userID;

+ (void)setSecureUrl:(BOOL)isSecure;

+ (void)checkUpdates:(BOOL)check;

+ (void)setLogLevel:(LogLevel)level;

+ (NSString*)getVersionBoxUUID;

+ (void)sendEventWithBeaconUUID:(NSString*)uuid major:(NSString*)major minor:(NSString*)minor regionName:(NSString*)regionName ;

+ (void)sendEventWithPlayerId:(NSString*)playerId;

+ (void)sendEventWithPageName:(NSString*)pageName;

+ (void)sendUserLoginEventWithParameters:(NSDictionary*)parameters response:(NSDictionary*)response;

+ (void)sendUserLoginEventWithParameters:(NSDictionary*)parameters response:(NSDictionary*)response username:(NSString*)username;

+ (void)sendUserLoginEventWithParameters:(NSDictionary*)parameters response:(NSDictionary*)response username:(NSString*)username warehouse:(NSString*)warehouse;

+ (void)sendUserCanNotLoginEventWithParameters:(NSDictionary*)parameters response:(NSDictionary*)response;

+ (void)sendUserCanNotLoginEventWithParameters:(NSDictionary*)parameters response:(NSDictionary*)response error:(NSString*)error;

//+ (void)sendLocationServiceStatusEventWithValue:(NSInteger)value;

+ (void)sendExternalAccessoryBatteryIsLowEvent;

//+ (void)sendBluetoothStatusEventWithValue:(NSInteger)value;

+ (void)sendUserLogoutEvent;

+ (void)sendEventWithSerialNumber:(NSString*)serialNumber;

+ (void)sendDeviceCustomName:(NSString*)deviceCustomName;

+ (void)sendExternalAccessoryBatteryStatusWithValue:(NSInteger)value;

+ (void)sendAppOpenEventWithDeviceName:(NSString*)deviceName;

+ (void)sendAppCloseEvent;

+ (void)sendAppOpenEvent;

+ (void)sendAppOpenEventWithUsername:(NSString*)username deviceName:(NSString*)deviceName;

+ (void)sendAppOpenEventWithUsername:(NSString*)username;

+ (void)sendDataNotRetrievedEventWithEndpoint:(NSString*)endpoint parameters:(NSDictionary*)parameters error:(NSError*)error;

+ (void)sendEventWithType:(EventType)type value:(float)value endpoint:(NSString*)enpoint parameters:(NSDictionary *)parameters response:(NSDictionary *)response;

+ (NSDate*)requestStartDate;

+ (void)sendResponseTimeEventWithEndpoint:(NSString*)endpoint parameters:(NSDictionary*)parameters response:(NSDictionary*)response startDate:(NSDate*)startDate;

- (NSString*)getDeviceModel;

@end
