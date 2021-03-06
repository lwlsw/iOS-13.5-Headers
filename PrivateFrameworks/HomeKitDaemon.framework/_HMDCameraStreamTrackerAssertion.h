/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamTracker, HMDCameraStreamSessionID;

@interface _HMDCameraStreamTrackerAssertion : HMFObject {

	HMDCameraStreamTracker* _streamTracker;
	HMDCameraStreamSessionID* _streamSessionID;

}

@property (nonatomic,__weak,readonly) HMDCameraStreamTracker * streamTracker;              //@synthesize streamTracker=_streamTracker - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * streamSessionID;                 //@synthesize streamSessionID=_streamSessionID - In the implementation block
-(void)dealloc;
-(HMDCameraStreamSessionID *)streamSessionID;
-(HMDCameraStreamTracker *)streamTracker;
-(id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2 ;
@end

