/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIStackView;

@interface CSAdjunctListView : CSCoverSheetViewBase {

	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
-(void)layoutSubviews;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)_layoutStackView;
@end
