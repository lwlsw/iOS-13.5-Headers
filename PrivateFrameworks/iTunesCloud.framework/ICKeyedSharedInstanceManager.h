/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableDictionary, NSMapTable;

@interface ICKeyedSharedInstanceManager : NSObject {

	os_unfair_lock_s _lock;
	/*^block*/id _instantiationHandler;
	NSMutableDictionary* _stronglyHeldSharedInstances;
	NSMapTable* _weaklyHeldSharedInstances;
	NSMutableDictionary* _usageCounts;

}
-(id)initWithInstantiationHandler:(/*^block*/id)arg1 ;
-(id)sharedInstanceForKey:(id)arg1 ;
-(void)incrementUsageCountForKey:(id)arg1 ;
-(void)decrementUsageCountForKey:(id)arg1 ;
@end

