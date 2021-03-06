/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURule.h>

@class NSPredicate;

@interface NSPredicateRule : NURule {

	NSPredicate* _predicate;

}

@property (nonatomic,retain,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
@end

