/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface _HKCalendarDayCellIconConfiguration : NSObject <NSCopying> {

	long long _dateIndex;
	UIColor* _color;
	long long _style;

}
+(id)configurationWithDateIndex:(long long)arg1 color:(id)arg2 style:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

