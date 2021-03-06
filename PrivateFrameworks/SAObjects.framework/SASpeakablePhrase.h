/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASpeakablePhrase : SADomainObject

@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * pronunciation; 
+(id)speakablePhrase;
+(id)speakablePhraseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(NSString *)pronunciation;
-(void)setPronunciation:(NSString *)arg1 ;
-(id)encodedClassName;
@end

