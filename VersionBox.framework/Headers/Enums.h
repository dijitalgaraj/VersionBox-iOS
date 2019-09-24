//
//  Enum.h
//  VersionBox
//
//  Created by Mehmet Akif Şengül on 19.08.2019.
//  Copyright © 2019 Dijital Garaj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Enums.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    email,
    phone,
    name,
    userId,
} UserInfoType;

typedef enum : NSUInteger {
    userCannotLogin,
    dataNotRetrieved,
} ErrorType;

typedef enum : NSUInteger {
    login,
    logout,
} ActionType;

typedef enum : NSUInteger {
    serialNumber,
    onesignalPlayerId,
    appUUID,
    externalAccessoryBattery,
} MetadataType;

typedef enum : NSUInteger {
    off,
    basic,
    debug,
    admin,
} LogLevel;

@interface Enums : NSObject

+ (NSString*)stringValueFromUserInfoType:(UserInfoType)type;
+ (NSString*)stringValueFromErrorType:(ErrorType)type;
+ (NSString*)stringValueFromActionType:(ActionType)type;
+ (NSString*)stringValueFromMetadataType:(MetadataType)type;

@end

NS_ASSUME_NONNULL_END
