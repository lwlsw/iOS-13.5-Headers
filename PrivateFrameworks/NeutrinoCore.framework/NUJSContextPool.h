/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NUJSContextPool : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _contexts;

}
+(id)sharedContextPool;
-(id)init;
-(id)newContext;
-(void)returnContext:(id)arg1 ;
-(id)_newContext;
-(void)_returnContext:(id)arg1 ;
@end

