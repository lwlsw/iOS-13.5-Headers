/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:45 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString;

@interface WFNetworkInterface : NSObject {

	NSString* _interfaceName;

}

@property (nonatomic,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) NSString * IPv4Address; 
@property (nonatomic,readonly) NSString * IPv6Address; 
+(id)networkInterfaceWithInterface:(id)arg1 ;
+(id)activeNetworkInterface;
+(id)defaultNetworkInterfaces;
+(id)wifiNetworkInterfaces;
-(id)initWithInterface:(id)arg1 ;
-(NSString *)interfaceName;
-(NSString *)SSID;
-(NSString *)BSSID;
-(NSString *)IPv4Address;
-(NSString *)IPv6Address;
-(WiFiNetworkRef)currentWiFiNetwork;
-(id)ipAddressForFamily:(unsigned char)arg1 ;
@end

