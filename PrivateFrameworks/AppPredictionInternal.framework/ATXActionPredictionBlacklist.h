/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, ATXAppPredictionBlacklist;

@interface ATXActionPredictionBlacklist : NSObject {

	_PASLock* _lock;
	id _blacklistNotificationToken;
	ATXAppPredictionBlacklist* _appPredictionBlacklist;
	int _prefsChangeNotificationToken;

}
+(id)sharedInstanceWithoutAppPredictionBlacklist;
+(id)sharedInstanceWithAppPredictionBlacklist;
-(id)init;
-(void)dealloc;
-(BOOL)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2 ;
-(BOOL)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2 forPrimaryShortcuts:(BOOL)arg3 ;
-(id)initWithAppPredictionBlacklist:(id)arg1 ;
-(void)setBlacklistFromAssetData:(id)arg1 predictionBlacklist:(id)arg2 shortcutBlacklist:(id)arg3 primaryShortcutBlacklist:(id)arg4 ;
-(void)addToBlacklists:(id)arg1 blacklistAppList:(id)arg2 blacklistActionList:(id)arg3 blacklistAppAndActionList:(id)arg4 ;
-(id)disabledBundlesInSettings;
-(id)_perfsDisabledApps;
-(id)spotlightDisabledShortcutsInSettings;
-(void)_handlePrefsChange;
-(BOOL)isBundleIdBlacklisted:(id)arg1 ;
-(BOOL)shouldPredictBundleId:(id)arg1 action:(id)arg2 ;
-(id)shouldPredictBundleIdHelper:(id)arg1 action:(id)arg2 ;
@end

