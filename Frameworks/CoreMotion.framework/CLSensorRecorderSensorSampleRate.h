/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorSampleRate : NSObject <NSSecureCoding> {

	unsigned _rate;
	int _dataType;

}

@property (assign) unsigned rate;              //@synthesize rate=_rate - In the implementation block
@property (assign) int dataType;               //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)dataType;
-(void)setRate:(unsigned)arg1 ;
-(unsigned)rate;
-(void)setDataType:(int)arg1 ;
@end

