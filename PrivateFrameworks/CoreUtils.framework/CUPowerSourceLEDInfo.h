/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CUPowerSourceLEDInfo : NSObject <NSSecureCoding> {

	int _LEDColor;
	int _LEDState;

}

@property (assign,nonatomic) int LEDColor;              //@synthesize LEDColor=_LEDColor - In the implementation block
@property (assign,nonatomic) int LEDState;              //@synthesize LEDState=_LEDState - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)LEDColor;
-(void)setLEDColor:(int)arg1 ;
-(int)LEDState;
-(void)setLEDState:(int)arg1 ;
@end

