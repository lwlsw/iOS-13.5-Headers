/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFAggregateForecastRequest.h>

@class NSLocale;

@interface WFDailyForecastRequest : WFAggregateForecastRequest {

	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startWithService:(id)arg1 ;
@end

