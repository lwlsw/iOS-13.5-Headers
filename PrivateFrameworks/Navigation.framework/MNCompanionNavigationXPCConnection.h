/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNCompanionNavigationDelegate.h>

@class NSXPCConnection, GEOCompanionRouteDetails, GEOCompanionRouteStatus, NSString;

@interface MNCompanionNavigationXPCConnection : NSObject <MNCompanionNavigationDelegate> {

	NSXPCConnection* _connection;
	GEOCompanionRouteDetails* _companionRouteDetails;
	GEOCompanionRouteStatus* _companionRouteStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_closeConnection;
-(void)_stop;
-(void)_openConnection;
-(void)updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 ;
-(void)updateNavigationRouteStatus:(id)arg1 ;
-(void)updateNavigationRouteWithUpdate:(id)arg1 ;
-(void)_connectionWasInterrupted;
-(void)_connectionWasInvalidated;
-(void)_resendRouteDetailsAndStatus;
@end

