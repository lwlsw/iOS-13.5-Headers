/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TUCallServicesClientCapabilitiesActions;
@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding> {

	BOOL _wantsCallDisconnectionOnInvalidation;
	BOOL _wantsFrequencyChangeNotifications;
	id<TUCallServicesClientCapabilitiesActions> _delegate;

}

@property (assign,nonatomic,__weak) id<TUCallServicesClientCapabilitiesActions> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL wantsCallDisconnectionOnInvalidation;                                //@synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation - In the implementation block
@property (assign,nonatomic) BOOL wantsFrequencyChangeNotifications;                                   //@synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<TUCallServicesClientCapabilitiesActions>)delegate;
-(void)setDelegate:(id<TUCallServicesClientCapabilitiesActions>)arg1 ;
-(void)save;
-(BOOL)wantsCallDisconnectionOnInvalidation;
-(BOOL)wantsFrequencyChangeNotifications;
-(void)setWantsCallDisconnectionOnInvalidation:(BOOL)arg1 ;
-(void)setWantsFrequencyChangeNotifications:(BOOL)arg1 ;
@end

