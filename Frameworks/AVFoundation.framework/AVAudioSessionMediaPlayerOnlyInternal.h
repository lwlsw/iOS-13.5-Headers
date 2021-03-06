/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioSessionDelegateMediaPlayerOnly;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSDictionary;

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef figPlayer;
	BOOL isAppAudioSession;
	BOOL isActive;
	NSString* category;
	NSString* mode;
	NSDictionary* activationContext;
	BOOL usingLongFormAudio;
	id<AVAudioSessionDelegateMediaPlayerOnly> delegate;

}
@end

