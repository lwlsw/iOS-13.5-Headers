/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDateComponents;

@interface HKMCNotification : NSObject <NSSecureCoding> {

	NSString* _category;
	NSDateComponents* _dueDateComponents;

}

@property (nonatomic,copy) NSString * category;                               //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;              //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(id)initWithCategory:(id)arg1 dueDateComponents:(id)arg2 ;
@end
