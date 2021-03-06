/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicValueSource, HUQuickControlItemUpdating;
@class HMHome;

@interface HUQuickControlViewControllerConfiguration : NSObject {

	BOOL _copyItems;
	HMHome* _home;
	id<HFCharacteristicValueSource> _valueSource;
	id<HUQuickControlItemUpdating> _itemUpdater;

}

@property (nonatomic,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,retain) id<HUQuickControlItemUpdating> itemUpdater;               //@synthesize itemUpdater=_itemUpdater - In the implementation block
@property (assign,nonatomic) BOOL copyItems;                                           //@synthesize copyItems=_copyItems - In the implementation block
-(HMHome *)home;
-(id)initWithHome:(id)arg1 ;
-(id<HUQuickControlItemUpdating>)itemUpdater;
-(BOOL)copyItems;
-(id<HFCharacteristicValueSource>)valueSource;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(void)setCopyItems:(BOOL)arg1 ;
-(void)setItemUpdater:(id<HUQuickControlItemUpdating>)arg1 ;
@end

