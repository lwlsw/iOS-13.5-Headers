/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class HUServiceDetailsItemManager, UIViewController, NSString;

@interface HUServiceDetailsTextViewDelegate : NSObject <UITextViewDelegate> {

	HUServiceDetailsItemManager* _itemManager;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) HUServiceDetailsItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(HUServiceDetailsItemManager *)itemManager;
-(void)setItemManager:(HUServiceDetailsItemManager *)arg1 ;
-(void)dismissTextViewController;
-(id)unifiedIdentifiersForSectionIdentifier:(id)arg1 ;
-(void)displayUnifiedPrivacyInformationWithIdentifiers:(id)arg1 ;
-(id)privacyIdentifierForSectionIdentifier:(id)arg1 ;
-(void)displayPrivacyInformationWithIdentifier:(id)arg1 ;
@end

