/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMContentItemRequestDelegate.h>

@class NSString;

@interface MessageContentRepresentationRequestDelegate : NSObject <EMContentItemRequestDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentObjectID:(id)arg1 generateHTMLSnippetsForRelatedContentItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)contentObjectID:(id)arg1 placeholderHTMLForEmptyContentWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)contentObjectID:(id)arg1 generateHTMLSnippetsForMailDropContentItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

