/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputContextCommunicationChannelInternal;

@interface AVOutputContextCommunicationChannel : NSObject {

	AVOutputContextCommunicationChannelInternal* _ivars;

}

@property (nonatomic,readonly) const CFStringRef commChannelUUID; 
@property (nonatomic,readonly) id<AVOutputContextCommunicationChannelImpl> impl; 
-(id)init;
-(void)dealloc;
-(id<AVOutputContextCommunicationChannelImpl>)impl;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputContextCommunicationChannelImpl:(id)arg1 ;
-(const CFStringRef)commChannelUUID;
@end
