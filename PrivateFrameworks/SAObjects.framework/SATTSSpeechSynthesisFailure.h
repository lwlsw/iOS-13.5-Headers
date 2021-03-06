/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SATTSSpeechSynthesisFailure : SABaseClientBoundCommand

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,copy) NSString * reasonDescription; 
+(id)speechSynthesisFailure;
+(id)speechSynthesisFailureWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(void)setReason:(NSString *)arg1 ;
-(long long)errorCode;
-(NSString *)reasonDescription;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(void)setReasonDescription:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end

