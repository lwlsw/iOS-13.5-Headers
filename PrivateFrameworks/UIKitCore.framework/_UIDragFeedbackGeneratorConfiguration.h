/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIDragFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {

	_UIFeedback*<_UIFeedbackContinuousPlayable> _interactionProgressingFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _interactionUpdatedFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _targetUpdatedFeedback;
	double _progressingFeedbackDelay;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> interactionProgressingFeedback;              //@synthesize interactionProgressingFeedback=_interactionProgressingFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> interactionUpdatedFeedback;                    //@synthesize interactionUpdatedFeedback=_interactionUpdatedFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> targetUpdatedFeedback;                         //@synthesize targetUpdatedFeedback=_targetUpdatedFeedback - In the implementation block
@property (assign,nonatomic) double progressingFeedbackDelay;                                                         //@synthesize progressingFeedbackDelay=_progressingFeedbackDelay - In the implementation block
+(id)defaultConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)interactionUpdatedFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)targetUpdatedFeedback;
-(double)progressingFeedbackDelay;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)interactionProgressingFeedback;
-(void)setTargetUpdatedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setInteractionProgressingFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(void)setInteractionUpdatedFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setProgressingFeedbackDelay:(double)arg1 ;
@end

