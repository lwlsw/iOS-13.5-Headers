/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKCanvasViewDelegate;
@class NSMutableArray, PKInk, PKCanvasView, UIGestureRecognizer;

@interface PNPWizardScratchpadCanvasView : UIView {

	NSMutableArray* _snapshotImageViews;
	PKInk* _ink;
	id<PKCanvasViewDelegate> _canvasViewDelegate;
	BOOL _showingSnapshot;
	PKCanvasView* _canvasView;

}

@property (assign,nonatomic) BOOL showingSnapshot;                                          //@synthesize showingSnapshot=_showingSnapshot - In the implementation block
@property (assign,nonatomic,__weak) id<PKCanvasViewDelegate> delegate; 
@property (nonatomic,readonly) PKCanvasView * canvasView;                                   //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) PKInk * ink; 
@property (nonatomic,readonly) UIGestureRecognizer * drawingGestureRecognizer; 
-(id<PKCanvasViewDelegate>)delegate;
-(void)setDelegate:(id<PKCanvasViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PKCanvasView *)canvasView;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(UIGestureRecognizer *)drawingGestureRecognizer;
-(BOOL)showingSnapshot;
-(void)setShowingSnapshot:(BOOL)arg1 ;
-(void)_playClearAnimationWithImage:(id)arg1 ;
-(void)clearDrawingAnimated;
-(void)prepareCanvasView;
@end

