/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSArray;

@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSArray* _assets;
	atomic<bool> _started;
	atomic<bool> _cancel;

}
+(id)taskWithAssets:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(int)run;
-(void)cancel;
-(BOOL)run:(id*)arg1 ;
-(id)initWithAssets:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(float)resourceRequirement;
@end
