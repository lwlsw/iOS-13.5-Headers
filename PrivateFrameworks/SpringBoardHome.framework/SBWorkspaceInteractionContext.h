/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIInteractionProgress, UIGestureRecognizer;

@interface SBWorkspaceInteractionContext : NSObject {

	UIInteractionProgress* _interactionProgress;
	UIGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,readonly) UIInteractionProgress * interactionProgress;              //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer;                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
-(UIInteractionProgress *)interactionProgress;
-(id)initWithInteractionProgress:(id)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(id)initWithGestureRecognizer:(id)arg1 ;
@end

