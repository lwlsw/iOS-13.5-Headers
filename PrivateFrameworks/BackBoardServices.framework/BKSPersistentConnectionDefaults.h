/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) int forceDemoMaxHBI; 
@property (nonatomic,retain) NSString * wifiInterfaceName; 
-(void)setWifiInterfaceName:(NSString *)arg1 ;
-(NSString *)wifiInterfaceName;
-(void)setForceDemoMaxHBI:(int)arg1 ;
-(int)forceDemoMaxHBI;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

