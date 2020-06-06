/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@protocol TFBetaLaunchHandleActivationDelegate;
@class BSProcessHandle, NSString;

@interface TFBetaLaunchHandle : NSObject <SBSRemoteAlertHandleObserver> {

	id<TFBetaLaunchHandleActivationDelegate> _activationDelegate;
	BSProcessHandle* _processHandle;
	NSString* _logKey;

}

@property (nonatomic,readonly) BSProcessHandle * processHandle;                                               //@synthesize processHandle=_processHandle - In the implementation block
@property (nonatomic,copy,readonly) NSString * logKey;                                                        //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic,__weak) id<TFBetaLaunchHandleActivationDelegate> activationDelegate;              //@synthesize activationDelegate=_activationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BSProcessHandle *)processHandle;
-(void)activateIfNeeded;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(NSString *)logKey;
-(BOOL)_remoteAlertShouldActivateForLaunchInfo:(id)arg1 ;
-(void)_activateRemoteAlertWithLaunchInfo:(id)arg1 ;
-(id<TFBetaLaunchHandleActivationDelegate>)activationDelegate;
-(void)_updatedLaunchInfoForActivation:(id)arg1 ;
-(id)initWithProcessHandle:(id)arg1 ;
-(void)activateForTestingWithLaunchInfo:(id)arg1 ;
-(void)setActivationDelegate:(id<TFBetaLaunchHandleActivationDelegate>)arg1 ;
@end
