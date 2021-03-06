/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:47 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@interface SOKerberosHelper : NSObject
+(gss_cred_id_t_desc_structRef)acquireCredentialForUUID:(id)arg1 ;
+(BOOL)authenticate:(gss_cred_id_t_desc_structRef)arg1 toServer:(id)arg2 returningToken:(id*)arg3 andError:(id*)arg4 ;
+(gss_cred_id_t_desc_structRef)createCredential:(id)arg1 withOptions:(id)arg2 andError:(id*)arg3 ;
+(gss_cred_id_t_desc_structRef)acquireCredentialForUPN:(id)arg1 ;
+(BOOL)_testForUPNForUser:(id)arg1 ;
+(BOOL)changePasswordForUPN:(id)arg1 withOldPassword:(id)arg2 withNewPassword:(id)arg3 withError:(id*)arg4 ;
+(BOOL)validatePassword:(id)arg1 forUser:(id)arg2 ;
+(void)destroyAllCredentials;
+(void)destroyCredential:(id)arg1 ;
+(void)destroyCredentialForUPN:(id)arg1 ;
+(id)listCredentials;
@end

