/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NAUIAutoUpdatingFontObserver : NSObject {

	id _notificationObserver;
	id _target;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
+(BOOL)canObserveFontsForTarget:(id)arg1 ;
-(void)dealloc;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
-(void)updateDyamicFontForCurrentContentSize;
@end

