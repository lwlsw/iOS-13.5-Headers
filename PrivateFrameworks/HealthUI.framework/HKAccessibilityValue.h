/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface HKAccessibilityValue : NSObject {

	NSString* _valueTitle;
	NSString* _valueType;
	NSString* _valueDescription;
	NSNumber* _valueAsNumber;

}

@property (nonatomic,readonly) NSString * valueTitle;                    //@synthesize valueTitle=_valueTitle - In the implementation block
@property (nonatomic,readonly) NSString * valueType;                     //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) NSString * valueDescription;              //@synthesize valueDescription=_valueDescription - In the implementation block
@property (nonatomic,readonly) NSNumber * valueAsNumber;                 //@synthesize valueAsNumber=_valueAsNumber - In the implementation block
-(id)description;
-(NSString *)valueType;
-(NSString *)valueDescription;
-(NSNumber *)valueAsNumber;
-(NSString *)valueTitle;
-(id)initWithValueTitle:(id)arg1 valueType:(id)arg2 valueDescription:(id)arg3 valueAsNumber:(id)arg4 ;
@end
