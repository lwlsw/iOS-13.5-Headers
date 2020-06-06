/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _AFAudioPowerXPCSharedMemory : NSObject {

	unsigned long long _mappedLength;
	void* _sharedRegion;

}

@property (nonatomic,readonly) float averagePower; 
@property (nonatomic,readonly) float peakPower; 
-(void)dealloc;
-(float)averagePower;
-(id)initWithXPCObject:(id)arg1 ;
-(void)_destroyMapping;
-(float)peakPower;
@end
