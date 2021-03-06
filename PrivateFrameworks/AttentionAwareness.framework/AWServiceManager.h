/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSMutableSet;

@interface AWServiceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSMutableSet* _serviceObservers;

}
+(void)addObserver:(id)arg1 ;
+(void)removeObserver:(id)arg1 ;
+(id)sharedManager;
+(id)invokeWithService:(/*^block*/id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)invokeWithService:(/*^block*/id)arg1 ;
@end

