/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {

	NSArray* _deviceTypes;
	long long _position;
	NSString* _mediaType;
	NSArray* _devices;
	NSArray* _supportedMultiCamDeviceSets;

}

@property (nonatomic,readonly) NSArray * devices;                                  //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) NSArray * supportedMultiCamDeviceSets; 
+(id)allDevices;
+(id)allVideoDevices;
+(id)allVirtualDeviceTypes;
+(id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)allDeviceTypes;
+(id)allVideoDeviceTypes;
+(id)allPointCloudDeviceTypes;
+(id)allAudioDeviceTypes;
+(id)allPointCloudDevices;
+(id)allAudioDevices;
+(id)allVirtualDevices;
+(id)allSupportedMultiCamDeviceSets;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)devices;
-(id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
-(NSArray *)supportedMultiCamDeviceSets;
@end

