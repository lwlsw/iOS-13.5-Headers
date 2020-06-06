/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAHLWorkoutGoal : AceObject <SAAceSerializable>

@property (assign,nonatomic) double goalValue; 
@property (nonatomic,copy) NSString * workoutGoalUnitType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workoutGoal;
+(id)workoutGoalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)goalValue;
-(void)setGoalValue:(double)arg1 ;
-(NSString *)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(NSString *)arg1 ;
-(id)encodedClassName;
@end
