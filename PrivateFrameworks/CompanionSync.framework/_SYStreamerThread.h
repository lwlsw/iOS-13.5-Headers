/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <Foundation/NSThread.h>

@class NSRunLoop, NSConditionLock;

@interface _SYStreamerThread : NSThread {

	NSRunLoop* _threadRunLoop;
	CFRunLoopSourceRef _stopRLS;
	NSConditionLock* _startupLock;

}

@property (nonatomic,readonly) NSRunLoop * runLoop; 
+(id)streamerThread;
-(id)init;
-(void)main;
-(NSRunLoop *)runLoop;
-(void)_waitForStartup;
@end

