/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, EFObserver;
@class BKSApplicationStateMonitor, NSObject, EFObservable;

@interface MFAppStateMonitor : NSObject {

	unsigned _appState;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	EFObservable*<EFObserver> _observable;

}

@property (nonatomic,readonly) EFObservable * appStateObservable; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isForeground;
-(id)initWithBundleId:(id)arg1 ;
-(void)_updateApplicationState:(id)arg1 observer:(id)arg2 ;
-(EFObservable *)appStateObservable;
@end

