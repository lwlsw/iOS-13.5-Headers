/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUIInternal.framework/CoreCDPUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDP/CDPRemoteDeviceSecretValidator.h>

@class NSString;

@interface DummyRemoteDeviceSecretValidator : CDPRemoteDeviceSecretValidator {

	NSString* _expectedString;
	unsigned long long _failedAttempts;

}
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)validateRecoveryKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)supportedEscapeOfferMask;
-(id)initWithExpectedSecret:(id)arg1 ;
@end

