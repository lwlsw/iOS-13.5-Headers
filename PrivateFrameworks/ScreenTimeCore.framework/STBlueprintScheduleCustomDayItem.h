/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents;

@interface STBlueprintScheduleCustomDayItem : NSObject <NSCopying> {

	NSDateComponents* _startTime;
	NSDateComponents* _endTime;
	unsigned long long _day;

}

@property (nonatomic,retain) NSDateComponents * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDateComponents * endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) unsigned long long day;                    //@synthesize day=_day - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDay:(unsigned long long)arg1 ;
-(unsigned long long)day;
-(NSDateComponents *)startTime;
-(NSDateComponents *)endTime;
-(void)setEndTime:(NSDateComponents *)arg1 ;
-(void)setStartTime:(NSDateComponents *)arg1 ;
@end

