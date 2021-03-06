/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@class UIAlertAction;

@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController {

	UIAlertAction* _cancelAction;
	BOOL _cancelsWhenAppEntersBackground;

}

@property (assign,nonatomic) BOOL cancelsWhenAppEntersBackground;              //@synthesize cancelsWhenAppEntersBackground=_cancelsWhenAppEntersBackground - In the implementation block
+(id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 externalCredentials:(id)arg3 preferredStyle:(long long)arg4 formURL:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)setCancelsWhenAppEntersBackground:(BOOL)arg1 ;
-(BOOL)cancelsWhenAppEntersBackground;
@end

