/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTAlarm, NSDate;


@protocol MTBedtimeDNDStateMachineInfoProvider <MTStateMachineInfoProvider>
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) NSDate * keepOffUntilDate; 
@property (nonatomic,readonly) BOOL inUserDefinedSleepWindow; 
@required
-(NSDate *)currentDate;
-(MTAlarm *)sleepAlarm;
-(NSDate *)keepOffUntilDate;
-(BOOL)inUserDefinedSleepWindow;
-(BOOL)isBedtimeDNDEnabled:(BOOL*)arg1;

@end

