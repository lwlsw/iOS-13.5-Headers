/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSBrightnessController : NSObject {

	/*^block*/id _isTracking;
	/*^block*/id _brightnessChangedExternally;

}

@property (nonatomic,copy) id isTracking;                               //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,copy) id brightnessChangedExternally;              //@synthesize brightnessChangedExternally=_brightnessChangedExternally - In the implementation block
+(id)sharedController;
-(id)isTracking;
-(void)setIsTracking:(id)arg1 ;
-(id)brightnessChangedExternally;
-(void)setBrightnessChangedExternally:(id)arg1 ;
@end

