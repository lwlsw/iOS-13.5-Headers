/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSMutableDictionary, NSUserDefaults, LSApplicationProxy;

@interface ATXPhoneWatchBundleIdCache : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _phoneToWatchCache;
	NSMutableDictionary* _watchToPhoneCache;
	NSUserDefaults* _appPredictionDefaults;
	LSApplicationProxy* _mockLSApplicationProxy;

}

@property (nonatomic,retain) LSApplicationProxy * mockLSApplicationProxy;              //@synthesize mockLSApplicationProxy=_mockLSApplicationProxy - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)updateMappings;
-(id)watchBundleIdForPhoneBundleId:(id)arg1 ;
-(id)phoneBundleIdForWatchBundleId:(id)arg1 ;
-(void)_saveCacheToUserDefaults;
-(void)_updatePhoneToWatchCache;
-(LSApplicationProxy *)mockLSApplicationProxy;
-(void)setMockLSApplicationProxy:(LSApplicationProxy *)arg1 ;
@end

