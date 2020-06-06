/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/_PSFeedbackAction.h>

@class NSString;

@interface _PSMapsFeedbackAction : _PSFeedbackAction {

	NSString* _contactId;
	NSString* _handle;

}

@property (nonatomic,copy,readonly) NSString * contactId;              //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                 //@synthesize handle=_handle - In the implementation block
+(id)engagementWithSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2 ;
+(id)engagementWithNonSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2 ;
-(NSString *)handle;
-(NSString *)contactId;
-(id)initWithContactIdentifier:(id)arg1 handle:(id)arg2 type:(long long)arg3 ;
@end
