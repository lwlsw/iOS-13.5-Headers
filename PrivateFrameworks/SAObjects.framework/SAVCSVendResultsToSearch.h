/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * shelves; 
@property (nonatomic,copy) NSString * title; 
+(id)vendResultsToSearch;
+(id)vendResultsToSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)shelves;
-(BOOL)requiresResponse;
-(void)setShelves:(NSArray *)arg1 ;
@end
