/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UITextView.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface MCLTextView : UITextView {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)onLongPress:(id)arg1 ;
-(void)onTap:(id)arg1 ;
@end

