/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol SVVideoPlaybackStateObserving <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(unsigned long long)state;
-(BOOL)isPlaying;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;

@end
