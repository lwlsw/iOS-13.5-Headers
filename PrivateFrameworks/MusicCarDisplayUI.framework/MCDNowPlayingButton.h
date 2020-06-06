/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/MCDNowPlayingObserverDelegate.h>

@class MCDNowPlayingButtonView, UIImageView, NSString;

@interface MCDNowPlayingButton : UIButton <MCDNowPlayingObserverDelegate> {

	MCDNowPlayingButtonView* _nowPlayingView;
	UIImageView* _focusBackgroundView;
	NSString* _stateName;
	double _height;

}

@property (assign,nonatomic) double height;                         //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSString * stateName;                    //@synthesize stateName=_stateName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithHeight:(double)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setStateName:(NSString *)arg1 ;
-(NSString *)stateName;
-(void)nowPlayingObserver:(id)arg1 stateDidChanged:(BOOL)arg2 ;
@end
