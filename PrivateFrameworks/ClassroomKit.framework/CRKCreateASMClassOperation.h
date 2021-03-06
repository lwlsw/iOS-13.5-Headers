/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitRosterRequirements;
@class CRKASMCourseCreateProperties;

@interface CRKCreateASMClassOperation : CATOperation {

	CRKASMCourseCreateProperties* _properties;
	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,copy,readonly) CRKASMCourseCreateProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(void)main;
-(BOOL)isAsynchronous;
-(CRKASMCourseCreateProperties *)properties;
-(id<CRKClassKitRosterRequirements>)requirements;
-(id)initWithProperties:(id)arg1 requirements:(id)arg2 ;
-(BOOL)applyProperties:(id)arg1 toClass:(id)arg2 error:(id*)arg3 ;
-(void)validateParameters;
-(void)fetchInstructor;
-(void)validateDesiredLocationExistsForInstructor:(id)arg1 ;
-(BOOL)location:(id)arg1 hasMatchInLocations:(id)arg2 ;
-(void)constructClassWithInstructor:(id)arg1 ;
@end

