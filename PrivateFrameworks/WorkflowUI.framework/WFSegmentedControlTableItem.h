/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFCustomTableItem.h>

@class NSArray;

@interface WFSegmentedControlTableItem : WFCustomTableItem {

	NSArray* _possibleValues;

}

@property (nonatomic,copy,readonly) NSArray * possibleValues;              //@synthesize possibleValues=_possibleValues - In the implementation block
+(id)itemWithInitialValue:(id)arg1 possibleValues:(id)arg2 ;
-(NSArray *)possibleValues;
-(void)configureCell:(id)arg1 ;
-(void)segmentedControlSelectedItemAtIndex:(unsigned long long)arg1 ;
@end
