/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline {

	NSThread* _thread;
	BOOL _immediateForMatchingThread;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3 ;
@end

