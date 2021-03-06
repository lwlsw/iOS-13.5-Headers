/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSString;

@interface BWPipelineStage : NSObject {

	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_group> _executionGroup;
	NSMutableArray* _queuedMessages;
	NSMutableArray* _inputsForQueuedMessages;
	NSString* _name;
	unsigned _priority;
	BOOL _stillImagePipelineStage;
	NSString* _stillImagePipelineStageEntryNodeName;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned priority;                                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL stillImagePipelineStage;                                 //@synthesize stillImagePipelineStage=_stillImagePipelineStage - In the implementation block
@property (nonatomic,readonly) NSString * stillImagePipelineStageEntryNodeName;              //@synthesize stillImagePipelineStageEntryNodeName=_stillImagePipelineStageEntryNodeName - In the implementation block
+(void)initialize;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 ;
+(id)pipelineStageWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
+(id)pipelineStageForStillImagesWithName:(id)arg1 priority:(unsigned)arg2 ;
+(id)pipelineStageForStillImagesWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned)arg3 ;
+(id)_currentPipelineStage;
+(void)_setCurrentPipelineStage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned)priority;
-(BOOL)stillImagePipelineStage;
-(NSString *)stillImagePipelineStageEntryNodeName;
-(void)sendMessage:(id)arg1 toInput:(id)arg2 ;
-(id)_initWithName:(id)arg1 priority:(unsigned)arg2 discardsLateSampleData:(BOOL)arg3 ;
-(id)_initStillImagePipelineStageWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned)arg3 ;
-(BOOL)_isCurrentPipelineStage;
-(void)_serviceQueuedMessages;
@end

