/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IDSCTSIM <NSObject>
@property (nonatomic,readonly) NSString * SIMIdentifier; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) unsigned long long slot; 
@required
-(NSString *)phoneNumber;
-(NSString *)label;
-(unsigned long long)slot;
-(NSString *)SIMIdentifier;

@end

