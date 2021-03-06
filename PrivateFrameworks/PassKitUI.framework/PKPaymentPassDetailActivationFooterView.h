/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface PKPaymentPassDetailActivationFooterView : UIView {

	UILabel* _footerTextLabel;
	UIButton* _activationButton;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setFooterText:(id)arg1 ;
-(void)setActivationButtonText:(id)arg1 ;
-(void)setActivationButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end

