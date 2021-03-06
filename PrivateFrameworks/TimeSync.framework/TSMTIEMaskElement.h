/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSMTIEMaskElement : NSObject <NSCopying> {

	double _a;
	double _b;
	double _lowerLimit;
	double _upperLimit;

}

@property (a,nonatomic,readonly) double a;                     //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) double b;                     //@synthesize b=_b - In the implementation block
@property (nonatomic,readonly) double lowerLimit;              //@synthesize lowerLimit=_lowerLimit - In the implementation block
@property (nonatomic,readonly) double upperLimit;              //@synthesize upperLimit=_upperLimit - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)b;
-(double)a;
-(double)lowerLimit;
-(double)upperLimit;
-(id)initWithCoefficient:(double)arg1 offset:(double)arg2 lowerLimit:(double)arg3 upperLimit:(double)arg4 ;
@end

