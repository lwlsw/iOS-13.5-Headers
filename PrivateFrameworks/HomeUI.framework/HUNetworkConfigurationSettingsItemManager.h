/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HUNetworkConfigurationSettingsModule, HFNetworkConfigurationGroupItem;

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager {

	HUNetworkConfigurationSettingsModule* _networkConfigurationSettingsModule;

}

@property (nonatomic,readonly) HFNetworkConfigurationGroupItem * sourceNetworkConfigurationGroupItem; 
@property (nonatomic,retain) HUNetworkConfigurationSettingsModule * networkConfigurationSettingsModule;              //@synthesize networkConfigurationSettingsModule=_networkConfigurationSettingsModule - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 networkConfigurationGroupItem:(id)arg2 ;
-(HUNetworkConfigurationSettingsModule *)networkConfigurationSettingsModule;
-(HFNetworkConfigurationGroupItem *)sourceNetworkConfigurationGroupItem;
-(void)setNetworkConfigurationSettingsModule:(HUNetworkConfigurationSettingsModule *)arg1 ;
@end

