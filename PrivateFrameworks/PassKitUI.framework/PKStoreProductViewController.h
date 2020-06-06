/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKStoreProductViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class NSString;

@interface PKStoreProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate> {

	BOOL _suppressingFooter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)initWithItemIdentifier:(id)arg1 ;
-(void)setSupressingFooter:(BOOL)arg1 ;
@end
