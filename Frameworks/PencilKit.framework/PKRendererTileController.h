/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKRendererTileController : NSObject {

	NSObject*<OS_dispatch_queue> _tileQueue;
	NSMutableDictionary* _tileFramebuffers;

}
+(id)sharedController;
-(id)init;
-(id)framebufferForTile:(id)arg1 createIfNeeded:(BOOL)arg2 device:(id)arg3 pixelFormat:(unsigned long long)arg4 clearFramebufferBlock:(/*^block*/id)arg5 ;
-(void)didTeardownTile:(id)arg1 ;
@end

