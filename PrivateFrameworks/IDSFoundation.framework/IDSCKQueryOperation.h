/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKQueryOperation : IDSCKDatabaseOperation {

	/*^block*/id _recordFetchedBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id recordFetchedBlock;              //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (copy) id completionBlock;                           //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)alloc;
+(Class)__class;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(id)recordFetchedBlock;
@end

