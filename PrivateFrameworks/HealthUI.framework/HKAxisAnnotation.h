/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, HKAxisLabel;

@interface HKAxisAnnotation : NSObject {

	UIColor* _textColor;
	HKAxisLabel* _axisLabel;

}

@property (nonatomic,readonly) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) HKAxisLabel * axisLabel;              //@synthesize axisLabel=_axisLabel - In the implementation block
-(UIColor *)textColor;
-(HKAxisLabel *)axisLabel;
-(id)initWithAnnotation:(id)arg1 color:(id)arg2 position:(id)arg3 ;
@end

