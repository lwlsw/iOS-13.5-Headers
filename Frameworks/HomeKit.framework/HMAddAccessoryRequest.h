/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHome, NSString, HMAccessoryCategory, NSUUID;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding> {

	BOOL _requiresSetupPayloadURL;
	BOOL _requiresOwnershipToken;
	HMHome* _home;
	NSString* _accessoryName;
	HMAccessoryCategory* _accessoryCategory;
	NSUUID* _requestIdentifier;

}

@property (nonatomic,retain) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * accessoryName;                             //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * accessoryCategory;              //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,readonly) BOOL requiresSetupPayloadURL;                         //@synthesize requiresSetupPayloadURL=_requiresSetupPayloadURL - In the implementation block
@property (nonatomic,readonly) BOOL requiresOwnershipToken;                          //@synthesize requiresOwnershipToken=_requiresOwnershipToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accessoryName;
-(HMHome *)home;
-(NSUUID *)requestIdentifier;
-(void)setHome:(HMHome *)arg1 ;
-(HMAccessoryCategory *)accessoryCategory;
-(BOOL)requiresSetupPayloadURL;
-(id)payloadWithOwnershipToken:(id)arg1 ;
-(id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2 ;
-(id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3 ;
-(BOOL)requiresOwnershipToken;
@end

