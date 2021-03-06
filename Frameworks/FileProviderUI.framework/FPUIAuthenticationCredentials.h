/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FPUIAuthenticationCredentials : NSObject {

	unsigned long long _type;
	NSString* _username;
	NSString* _password;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                    //@synthesize password=_password - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
@end

