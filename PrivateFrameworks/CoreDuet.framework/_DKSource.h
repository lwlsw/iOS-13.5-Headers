/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface _DKSource : NSObject <_DKProtobufConverting, NSSecureCoding> {

	NSString* _sourceID;
	NSString* _bundleID;
	NSString* _itemID;
	NSString* _groupID;
	NSString* _deviceID;
	NSNumber* _userID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * syncDeviceID; 
@property (retain) NSString * deviceID;                             //@synthesize deviceID=_deviceID - In the implementation block
@property (retain) NSNumber * userID;                               //@synthesize userID=_userID - In the implementation block
@property (readonly) NSString * sourceID;                           //@synthesize sourceID=_sourceID - In the implementation block
@property (readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) NSString * itemID;                             //@synthesize itemID=_itemID - In the implementation block
@property (readonly) NSString * groupID;                            //@synthesize groupID=_groupID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromPBCodable:(id)arg1 ;
+(id)defaultSourceID;
+(id)intentsSourceID;
+(id)sourceForInteraction:(id)arg1 bundleID:(id)arg2 ;
+(id)sourceForSearchableItem:(id)arg1 bundleID:(id)arg2 ;
+(id)entityName;
+(id)spotlightSourceID;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)userID;
-(NSString *)bundleID;
-(NSString *)itemID;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(id)toPBCodable;
-(NSString *)syncDeviceID;
-(NSString *)sourceID;
-(NSString *)groupID;
-(id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6 ;
-(void)setUserID:(NSNumber *)arg1 ;
@end

