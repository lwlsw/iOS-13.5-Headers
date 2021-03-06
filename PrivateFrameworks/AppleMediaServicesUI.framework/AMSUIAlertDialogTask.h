/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest, UIViewController;

@interface AMSUIAlertDialogTask : AMSTask {

	AMSDialogRequest* _request;
	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) AMSDialogRequest * request;                               //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(long long)_keyboardTypeFromType:(long long)arg1 ;
+(id)_convertTextField:(id)arg1 ;
-(AMSDialogRequest *)request;
-(UIViewController *)presentingViewController;
-(id)present;
-(id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_createIOSViewControllerFromRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

