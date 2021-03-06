/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAGKAlternateResult : AceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alternateResult;
+(id)alternateResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(id<SAClientBoundCommand>)command;
-(id)encodedClassName;
@end

