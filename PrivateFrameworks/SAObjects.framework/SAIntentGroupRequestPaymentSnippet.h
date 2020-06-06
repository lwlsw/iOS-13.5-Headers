/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupRequestPaymentSnippet : SAUISnippet

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentResponse; 
+(id)requestPaymentSnippet;
+(id)requestPaymentSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)intent;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)intentResponse;
-(void)setIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)encodedClassName;
@end
