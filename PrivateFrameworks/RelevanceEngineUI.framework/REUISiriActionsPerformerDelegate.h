/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REUISiriActionsPerformerDelegate <NSObject>
@required
-(id)siriActionsPerformerWantsAlertBackgroundImage:(id)arg1;
-(id)siriActionsPerformerWantsBackgroundViewToBlur:(id)arg1;
-(BOOL)siriActionsPerformer:(id)arg1 wantsToPresentViewController:(id)arg2;
-(void)siriActionsPerformerWantsToSuppressDismissal:(id)arg1;
-(BOOL)siriActionsPerformer:(id)arg1 wantsToDismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)siriActionsPerformerDidSucceed:(id)arg1;
-(void)siriActionsPerformer:(id)arg1 didFailWithError:(id)arg2;

@end

