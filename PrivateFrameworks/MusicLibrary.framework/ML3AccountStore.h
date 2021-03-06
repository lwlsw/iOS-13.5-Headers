/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ML3AccountInformationProviding.h>

@class NSString, ACAccount;

@interface ML3AccountStore : NSObject <ML3AccountInformationProviding>

@property (nonatomic,readonly) ACAccount * activeAccount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * accountDSID; 
+(id)defaultStore;
-(id)_init;
-(ACAccount *)activeAccount;
-(NSString *)accountDSID;
-(id)_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)altDSIDForAccountWithDSID:(long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end

