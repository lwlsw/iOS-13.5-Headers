/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject {

	PLBackgroundJobWorker* _worker;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLBackgroundJobWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                 //@synthesize priority=_priority - In the implementation block
-(id)description;
-(unsigned long long)priority;
-(id)initWithWorker:(id)arg1 priority:(unsigned long long)arg2 ;
-(PLBackgroundJobWorker *)worker;
@end

