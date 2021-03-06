/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRE/CoreRE-Structs.h>
#import <libobjc.A.dylib/ARInternalSessionObserver.h>

@class ARSession, NSMutableSet, NSString;

@interface REARSessionObserver : NSObject <ARInternalSessionObserver> {

	ARSession* _session;
	NSMutableSet* _activeChunks;
	Queue<QueuedUpdateMessage>* _queuedUpdates;
	UnfairLock _queueLock;
	SCD_Struct_RE33 _renderTransform;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init:(id)arg1 ;
-(void)session:(id)arg1 didAddAnchors:(id)arg2 ;
-(void)session:(id)arg1 didUpdateAnchors:(id)arg2 ;
-(void)session:(id)arg1 didRemoveAnchors:(id)arg2 ;
-(void)session:(id)arg1 ;
-(Queue<QueuedUpdateMessage>*)getQueuedUpdatesSinceLast;
@end

