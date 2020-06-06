/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFActionDrawerState.h>

@class WFActionDrawerState, NSIndexPath, NSString, WFActionDrawerResults, WFAction;

@interface WFActionDrawerMutableState : WFActionDrawerState

@property (assign,nonatomic) long long activePane; 
@property (nonatomic,retain) WFActionDrawerState * precedingState; 
@property (nonatomic,retain) NSIndexPath * listPosition; 
@property (nonatomic,copy) NSString * searchQuery; 
@property (assign,getter=isFocusedOnSearchBar,nonatomic) BOOL focusedOnSearchBar; 
@property (nonatomic,retain) WFActionDrawerResults * listResults; 
@property (nonatomic,copy) NSString * categoryName; 
@property (nonatomic,retain) WFAction * action; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@end
