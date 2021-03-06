/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUAlarmTableViewCellDelegate.h>

@protocol HUHomePodAlarmItemModuleControllerDelegate;
@class NSMapTable, NSString;

@interface HUHomePodAlarmItemModuleController : HUItemTableModuleController <HUAlarmTableViewCellDelegate> {

	id<HUHomePodAlarmItemModuleControllerDelegate> _delegate;
	NSMapTable* _cellToItemMap;

}

@property (nonatomic,readonly) NSMapTable * cellToItemMap;                                                //@synthesize cellToItemMap=_cellToItemMap - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomePodAlarmItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUHomePodAlarmItemModuleControllerDelegate>)delegate;
-(void)setDelegate:(id<HUHomePodAlarmItemModuleControllerDelegate>)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(NSMapTable *)cellToItemMap;
-(void)setAlarmEnabled:(BOOL)arg1 forCell:(id)arg2 ;
@end

