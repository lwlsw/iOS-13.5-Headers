/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:15 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMNetworkSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadForceWiFiWhitelisting;
	NSNumber* _payloadAllowVPNCreation;

}

@property (nonatomic,copy) NSNumber * payloadForceWiFiWhitelisting;              //@synthesize payloadForceWiFiWhitelisting=_payloadForceWiFiWhitelisting - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowVPNCreation;                   //@synthesize payloadAllowVPNCreation=_payloadAllowVPNCreation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withForceWiFiWhitelisting:(id)arg2 withAllowVPNCreation:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadForceWiFiWhitelisting:(NSNumber *)arg1 ;
-(void)setPayloadAllowVPNCreation:(NSNumber *)arg1 ;
-(NSNumber *)payloadForceWiFiWhitelisting;
-(NSNumber *)payloadAllowVPNCreation;
@end
