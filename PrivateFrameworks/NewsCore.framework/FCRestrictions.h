/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCRestrictions : NSObject {

	BOOL _testing;
	long long _buildVersionNumber;
	long long _isExplicitContentAllowedOverride;

}

@property (assign,nonatomic) BOOL testing;                                            //@synthesize testing=_testing - In the implementation block
@property (assign,nonatomic) long long isExplicitContentAllowedOverride;              //@synthesize isExplicitContentAllowedOverride=_isExplicitContentAllowedOverride - In the implementation block
@property (assign,nonatomic) long long buildVersionNumber;                            //@synthesize buildVersionNumber=_buildVersionNumber - In the implementation block
@property (nonatomic,readonly) BOOL isExplicitContentAllowed; 
@property (nonatomic,readonly) BOOL isDiagnosticsUsageEnabled; 
+(id)sharedInstance;
+(long long)integerRepresentationOfShortVersionString:(id)arg1 ;
-(id)init;
-(BOOL)isExplicitContentAllowed;
-(BOOL)isNewsVersionAllowedWithMinNewsVersion:(long long)arg1 maxNewsVersion:(long long)arg2 ;
-(BOOL)isContentAllowedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3 ;
-(BOOL)testing;
-(long long)isExplicitContentAllowedOverride;
-(void)setIsExplicitContentAllowedOverride:(long long)arg1 ;
-(long long)buildVersionNumber;
-(BOOL)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3 ;
-(void)t_startForcingExplicitContentDisallowed;
-(void)t_stopForcingExplicitContentDisallowed;
-(BOOL)isDiagnosticsUsageEnabled;
-(BOOL)isNewsVersionAllowed:(long long)arg1 ;
-(void)setBuildVersionNumber:(long long)arg1 ;
-(void)setTesting:(BOOL)arg1 ;
@end

