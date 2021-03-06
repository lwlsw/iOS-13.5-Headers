/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PASDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(id)sharedInstance;
+(id)deviceUUID;
+(BOOL)isInternalBuild;
+(BOOL)isAudioAccessory;
+(BOOL)isLowEndHardware;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(BOOL)isBetaBuild;
+(BOOL)isDNUEnabled;
+(BOOL)shouldIncludePredictionLogs;
-(id)init;
-(void)dealloc;
@end

