/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFInternalSettingsCache : NSObject {

	BOOL _tiltedTabSkyViewEnabled;
	BOOL _UIDebuggingEnabled;

}

@property (assign,nonatomic) BOOL tiltedTabSkyViewEnabled;              //@synthesize tiltedTabSkyViewEnabled=_tiltedTabSkyViewEnabled - In the implementation block
@property (assign,nonatomic) BOOL UIDebuggingEnabled;                   //@synthesize UIDebuggingEnabled=_UIDebuggingEnabled - In the implementation block
+(id)sharedCache;
-(BOOL)tiltedTabSkyViewEnabled;
-(BOOL)UIDebuggingEnabled;
-(void)setTiltedTabSkyViewEnabled:(BOOL)arg1 ;
-(void)setUIDebuggingEnabled:(BOOL)arg1 ;
@end
