/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UILabel;

@interface SKUIReviewInAppRatingButtonViewController : UIViewController {

	BOOL _enabled;
	NSString* _titleString;
	unsigned long long _style;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * titleString;                       //@synthesize titleString=_titleString - In the implementation block
@property (assign,nonatomic) unsigned long long style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
@end

