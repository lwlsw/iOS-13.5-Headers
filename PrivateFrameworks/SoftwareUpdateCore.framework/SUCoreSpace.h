/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUCoreSpace : NSObject
+(void)checkAvailableSpace:(unsigned long long)arg1 allowPurgeWithUrgency:(int)arg2 purgingFromBase:(id)arg3 minimalRequiredFreeSpace:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(id)cacheDeleteUrgencyName:(int)arg1 ;
+(void)checkAvailableSpace:(unsigned long long)arg1 allowPurgeWithUrgency:(int)arg2 purgingFromBase:(id)arg3 minimalRequiredFreeSpace:(unsigned long long)arg4 withCompletionQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)_issueSpaceCheckCompletion:(/*^block*/id)arg1 withCompletionQueue:(id)arg2 haveEnoughSpace:(BOOL)arg3 haveTotalRequired:(BOOL)arg4 freeSpaceAvailable:(unsigned long long)arg5 error:(id)arg6 releasingTransaction:(id)arg7 ;
+(void)_trackSpaceBegin:(id)arg1 withIdentifier:(id)arg2 ;
+(void)_trackSpaceEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
+(void)cacheDeletePurge:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(int)arg3 completion:(/*^block*/id)arg4 ;
+(void)cacheDeletePurge:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(int)arg3 withCompletionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_trackSpaceBegin:(id)arg1 ;
+(void)_trackSpaceEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
@end
