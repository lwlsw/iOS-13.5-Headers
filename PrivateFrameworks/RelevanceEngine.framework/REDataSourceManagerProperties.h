/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSArray;


@protocol REDataSourceManagerProperties <REExportedInterface>
@property (nonatomic,readonly) NSSet * disabledDataSources; 
@property (readonly) NSSet * availableDataSourceIdentifiers; 
@property (readonly) NSSet * currentDataSourceIdentifiers; 
@property (readonly) NSArray * currentDataSources; 
@property (nonatomic,readonly) NSArray * dataSourceControllers; 
@required
-(NSSet *)availableDataSourceIdentifiers;
-(NSArray *)currentDataSources;
-(NSSet *)currentDataSourceIdentifiers;
-(NSSet *)disabledDataSources;
-(NSArray *)dataSourceControllers;

@end

