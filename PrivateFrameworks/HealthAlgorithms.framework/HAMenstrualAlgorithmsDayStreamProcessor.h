/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthAlgorithms/HealthAlgorithms-Structs.h>
@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject {

	unique_ptr<Nightingale::ngt_DayStreamProcessor, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor> >* _dayStreamProcessor;
	optional<unsigned int> _julianDayOfLastInput;

}
-(id)init;
-(id)analyze;
-(id)initWithConfig:(id)arg1 ;
-(id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned)arg1 ;
-(void)appendDay:(id)arg1 ;
@end

