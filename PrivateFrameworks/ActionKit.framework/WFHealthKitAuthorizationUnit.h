/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:43 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKObjectType;

@interface WFHealthKitAuthorizationUnit : NSObject <NSSecureCoding> {

	HKObjectType* _objectType;
	long long _accessType;

}

@property (nonatomic,readonly) HKObjectType * objectType;              //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,readonly) long long accessType;                   //@synthesize accessType=_accessType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKObjectType *)objectType;
-(long long)accessType;
-(id)initWithObjectType:(id)arg1 accessType:(long long)arg2 ;
@end

