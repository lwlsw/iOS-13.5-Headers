/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStatusBarStyleAttributes, UIImageView;

@interface UIStatusBarBackgroundView : UIView {

	UIStatusBarStyleAttributes* _style;
	UIImageView* _glowView;
	BOOL _glowEnabled;
	BOOL _suppressGlow;

}
-(id)style;
-(id)initWithFrame:(CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setGlowAnimationEnabled:(BOOL)arg1 ;
-(id)_baseImage;
-(void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2 ;
-(void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1 ;
-(void)_stopGlowAnimation;
-(BOOL)_styleCanGlow;
-(id)_glowImage;
-(id)_backgroundImageName;
-(void)setSuppressesGlow:(BOOL)arg1 ;
@end

