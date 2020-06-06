/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JTCompositionClipsDataSource <NSObject>
@optional
-(BOOL)containsEffectsThatRequireCustomRendering;

@required
-(int)duration;
-(double)imageScale;
-(CGSize*)naturalSize;
-(BOOL)isFullScreen;
-(BOOL)supportsDeepColor;
-(int)timeScale;
-(int)frameRate;
-(id)currentClip;
-(long long)clipCount;
-(id)clipAtIndex:(long long)arg1;
-(BOOL)screenCanShow2160P;
-(BOOL)isExporting;
-(BOOL)use2160Pcontent:(BOOL)arg1;
-(BOOL)duckAllAudioClips;
-(id)backgroundAudioClip;
-(BOOL)fullScreenPlaybackOnExternalDisplay;
-(BOOL)dontRenderLiveTitles;
-(long long)indexOfClip:(id)arg1;

@end
