/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, NSString;

@interface WFModuleTitleButton : UIButton {

	unsigned long long _style;
	UILabel* _subtitleLabel;

}

@property (assign,nonatomic) unsigned long long style;               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSString *)subtitle;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(UILabel *)subtitleLabel;
-(CGSize)iconSize;
-(CGSize)sizeForLabel:(id)arg1 withMaxWidth:(double)arg2 ;
-(BOOL)isTitleLabelMultiline;
-(double)iconTitlePadding;
-(double)titleSubtitlePadding;
@end

