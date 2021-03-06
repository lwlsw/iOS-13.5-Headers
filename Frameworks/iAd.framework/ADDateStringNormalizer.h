/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression;

@interface ADDateStringNormalizer : NSObject {

	NSRegularExpression* _regularExpression;

}

@property (nonatomic,retain) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
+(id)formatter;
+(id)dateFromString:(id)arg1 ;
+(id)normalizers;
+(id)relativeDateFormatStringForDate:(id)arg1 ;
-(NSRegularExpression *)regularExpression;
-(void)setRegularExpression:(NSRegularExpression *)arg1 ;
-(id)normalize:(id)arg1 ;
@end

