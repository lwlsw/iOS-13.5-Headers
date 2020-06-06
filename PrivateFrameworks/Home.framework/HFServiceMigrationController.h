/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFHomeKitDispatcher, HMHome;

@interface HFServiceMigrationController : NSObject {

	HFHomeKitDispatcher* _dispatcher;
	HMHome* _home;
	unsigned long long _timeoutOverride;

}

@property (nonatomic,retain) HFHomeKitDispatcher * dispatcher;                //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) HMHome * home;                                   //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) unsigned long long timeoutOverride;              //@synthesize timeoutOverride=_timeoutOverride - In the implementation block
+(id)primaryServicesToMigrateForHome:(id)arg1 ;
+(id)accessoriesToMigrateFavoritesForHome:(id)arg1 ;
+(BOOL)homeNeedsMigration:(id)arg1 ;
+(BOOL)homeNeedsToDisplayMigrationOnboardingUI;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(HFHomeKitDispatcher *)dispatcher;
-(void)setDispatcher:(HFHomeKitDispatcher *)arg1 ;
-(void)setTimeoutOverride:(unsigned long long)arg1 ;
-(unsigned long long)timeoutOverride;
-(id)migrateServicesToAccessory;
@end
