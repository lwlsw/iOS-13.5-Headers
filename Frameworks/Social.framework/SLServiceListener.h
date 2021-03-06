/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class Protocol, NSXPCInterface, NSXPCListener, NSString, NSArray;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate> {

	Class _sessionClass;
	Protocol* _serviceProtocol;
	NSXPCInterface* _clientInterface;
	NSXPCListener* _listener;
	NSString* _persistentStoreName;
	NSString* _managedObjectModelPath;
	NSArray* _allowedEntitlements;
	NSString* _serviceName;

}

@property (retain) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) NSXPCInterface * clientInterface;                //@synthesize clientInterface=_clientInterface - In the implementation block
@property (retain) NSString * persistentStoreName;                  //@synthesize persistentStoreName=_persistentStoreName - In the implementation block
@property (retain) NSString * managedObjectModelPath;               //@synthesize managedObjectModelPath=_managedObjectModelPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)persistentStoreName;
-(NSXPCInterface *)clientInterface;
-(BOOL)_verifyAuthorizationForConnection:(id)arg1 ;
-(id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2 ;
-(void)restrictToClientsWithEntitlements:(id)arg1 ;
-(void)beginAcceptingConnections;
-(void)setClientInterface:(NSXPCInterface *)arg1 ;
-(void)setPersistentStoreName:(NSString *)arg1 ;
-(NSString *)managedObjectModelPath;
-(void)setManagedObjectModelPath:(NSString *)arg1 ;
@end

