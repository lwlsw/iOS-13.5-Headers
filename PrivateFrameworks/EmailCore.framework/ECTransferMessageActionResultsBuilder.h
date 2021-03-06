/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDictionary;


@protocol ECTransferMessageActionResultsBuilder <ECLocalMessageActionResultsBuilder>
@property (assign,nonatomic) long long phaseForResults; 
@property (nonatomic,copy) NSArray * completedItems; 
@property (nonatomic,copy) NSArray * failedItems; 
@property (nonatomic,copy) NSArray * createdServerMessages; 
@property (nonatomic,copy) NSDictionary * downloadedDataByCopyItems; 
@required
-(NSArray *)completedItems;
-(void)setCompletedItems:(id)arg1;
-(void)setPhaseForResults:(long long)arg1;
-(void)setFailedItems:(id)arg1;
-(void)setCreatedServerMessages:(id)arg1;
-(void)setDownloadedDataByCopyItems:(id)arg1;
-(long long)phaseForResults;
-(NSArray *)failedItems;
-(NSArray *)createdServerMessages;
-(NSDictionary *)downloadedDataByCopyItems;

@end

