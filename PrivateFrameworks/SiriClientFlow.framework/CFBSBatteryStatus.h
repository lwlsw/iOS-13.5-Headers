/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface CFBSBatteryStatus : SADomainObject

@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSNumber * batteryPercent; 
@property (nonatomic,copy) NSNumber * batteryCharging; 
@property (nonatomic,copy) NSNumber * lowBattery; 
+(id)object;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setLowBattery:(NSNumber *)arg1 ;
-(NSNumber *)batteryPercent;
-(void)setBatteryPercent:(NSNumber *)arg1 ;
-(NSNumber *)batteryCharging;
-(void)setBatteryCharging:(NSNumber *)arg1 ;
-(NSNumber *)lowBattery;
@end

