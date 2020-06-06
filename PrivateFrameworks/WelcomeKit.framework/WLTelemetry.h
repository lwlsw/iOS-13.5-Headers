/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WLTelemetry : NSObject
+(id)sharedInstance;
-(void)migrationDidStart;
-(id)_telemetryDictionaryForPreparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4 ;
-(void)wifiDidStartWithSuccess:(BOOL)arg1 ;
-(void)connectionToAndroidDeviceDidSucceed;
-(void)connectionToAndroidDeviceDidFailWithTimeout;
-(void)connectionToAndroidDeviceDidFailWithAuthenticationError;
-(void)preparatoryDataDidComplete:(id)arg1 contentType:(id)arg2 duration:(double)arg3 metadata:(id)arg4 ;
-(void)migrationDidSucceed;
-(void)migrationDidFail;
-(void)communicationDidFailForDataType:(id)arg1 ;
-(void)importDidFailForDataType:(id)arg1 ;
-(void)importDidFailSilentlyForDataType:(id)arg1 ;
-(void)didResolveTimeEstimate:(unsigned long long)arg1 forDownloadTask:(id)arg2 threshold:(unsigned long long)arg3 actualTime:(unsigned long long)arg4 ;
-(void)priorConnectionDidFailWithReason:(id)arg1 androidOSAPIVersion:(id)arg2 ;
@end
