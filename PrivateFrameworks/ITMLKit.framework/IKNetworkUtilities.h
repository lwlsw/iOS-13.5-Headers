/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences, NSString;

@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate> {

	id _isNetworkTypeChangedToken;
	id _networkReachabilityChangedToken;
	RadiosPreferences* _radioPrefs;

}

@property (getter=isAirplaneModeEnabled,nonatomic,readonly) BOOL airplaneModeEnabled; 
@property (getter=isNetworkReachable,nonatomic,readonly) BOOL networkReachable; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)networkType;
-(BOOL)isNetworkReachable;
-(void)airplaneModeChanged;
-(BOOL)isAirplaneModeEnabled;
-(void)_notifyObservers;
-(double)lastNetworkChangedTime;
@end

