/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUImageOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class HMNetworkRouterProfile, NSString;

@interface HUSetupNetworkRouterProtectionAutoViewController : HUImageOBWelcomeController <HUConfigurationViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	HMNetworkRouterProfile* _profile;

}

@property (nonatomic,readonly) HMNetworkRouterProfile * profile;                                     //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(HMNetworkRouterProfile *)profile;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_learnMorePressed:(id)arg1 ;
-(void)_continuePressed:(id)arg1 ;
-(BOOL)_hasNetworkCustomizableAccessories;
-(void)_customizePressed:(id)arg1 ;
-(void)_disablePressed:(id)arg1 ;
-(void)_updateNetworkProtection:(long long)arg1 andFinishWithActionResult:(unsigned long long)arg2 ;
-(id)initWithProfile:(id)arg1 configurationDelegate:(id)arg2 ;
@end
