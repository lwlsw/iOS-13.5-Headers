/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>

@class NSArray;

@interface SKUINavigationBarMenusView : SKUIViewReuseView {

	SEL _buttonAction;
	id _buttonTarget;
	UIEdgeInsets _contentInset;
	NSArray* _menuViewElements;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
+(id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)reloadWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3 ;
-(void)setButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end
