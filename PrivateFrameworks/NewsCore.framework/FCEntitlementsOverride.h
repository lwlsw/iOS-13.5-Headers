/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSError;

@interface FCEntitlementsOverride : NSObject {

	NSArray* _entitlements;
	NSError* _error;

}

@property (nonatomic,copy) NSArray * entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)entitlements;
-(void)setEntitlements:(NSArray *)arg1 ;
-(id)initWithEntitlements:(id)arg1 error:(id)arg2 ;
@end

