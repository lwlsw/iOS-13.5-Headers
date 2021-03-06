/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeQueueEndActionCommand : MPRemoteCommand {

	long long _currentQueueEndAction;
	NSArray* _supportedQueueEndActions;

}

@property (assign,nonatomic) long long currentQueueEndAction;               //@synthesize currentQueueEndAction=_currentQueueEndAction - In the implementation block
@property (nonatomic,copy) NSArray * supportedQueueEndActions;              //@synthesize supportedQueueEndActions=_supportedQueueEndActions - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentQueueEndAction:(long long)arg1 ;
-(void)setSupportedQueueEndActions:(NSArray *)arg1 ;
-(long long)currentQueueEndAction;
-(NSArray *)supportedQueueEndActions;
@end

