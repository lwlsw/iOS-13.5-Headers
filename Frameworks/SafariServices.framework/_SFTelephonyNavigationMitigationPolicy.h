/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFDialogPresenting;
@class NSDate;

@interface _SFTelephonyNavigationMitigationPolicy : NSObject {

	long long _classification;
	NSDate* _dateUserLastDeclined;
	id<_SFDialogPresenting> _dialogPresenter;

}

@property (assign,nonatomic,__weak) id<_SFDialogPresenting> dialogPresenter;              //@synthesize dialogPresenter=_dialogPresenter - In the implementation block
+(double)test_suspiciousClassificationExpirationDuration;
-(void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
-(void)_handleInput:(long long)arg1 ;
-(BOOL)policyAppliesToURL:(id)arg1 ;
-(void)handleNavigationToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userAcceptedCallPrompt;
-(void)userDeclinedCallPrompt;
-(id<_SFDialogPresenting>)dialogPresenter;
-(void)setDialogPresenter:(id<_SFDialogPresenting>)arg1 ;
@end

