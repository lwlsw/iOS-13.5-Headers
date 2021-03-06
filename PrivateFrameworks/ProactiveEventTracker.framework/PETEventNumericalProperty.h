/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProactiveEventTracker/PETEventProperty.h>

@interface PETEventNumericalProperty : PETEventProperty {

	NSRange _validRange;
	BOOL _clampValues;

}
-(id)description;
-(BOOL)isValidValue:(id)arg1 ;
-(id)_loggingKeyStringRepresentationForValue:(id)arg1 ;
-(unsigned long long)cardinality;
-(id)longestValueString;
-(NSRange)validRange;
-(id)initWithName:(id)arg1 range:(NSRange)arg2 clampValues:(BOOL)arg3 ;
-(unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1 ;
@end

