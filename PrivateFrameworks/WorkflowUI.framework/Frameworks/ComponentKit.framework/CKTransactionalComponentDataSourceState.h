/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKTransactionalComponentDataSourceConfiguration, NSArray;

@interface CKTransactionalComponentDataSourceState : NSObject {

	CKTransactionalComponentDataSourceConfiguration* _configuration;
	NSArray* _sections;

}

@property (nonatomic,copy,readonly) NSArray * sections;                                                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(CKTransactionalComponentDataSourceConfiguration *)configuration;
-(long long)numberOfSections;
-(NSArray *)sections;
-(id)objectAtIndexPath:(id)arg1 ;
-(long long)numberOfObjectsInSection:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 sections:(id)arg2 ;
-(void)enumerateObjectsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

