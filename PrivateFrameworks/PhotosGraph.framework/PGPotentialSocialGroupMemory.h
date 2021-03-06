/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphSocialGroupNode, NSArray, NSSet;

@interface PGPotentialSocialGroupMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphSocialGroupNode* _socialGroupNode;
	long long _year;
	NSArray* _facedAssets;
	NSSet* _peopleUUIDs;

}

@property (readonly) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (readonly) long long year;                                        //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssets;                                   //@synthesize facedAssets=_facedAssets - In the implementation block
@property (retain) NSSet * peopleUUIDs;                                     //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
-(long long)year;
-(NSSet *)peopleUUIDs;
-(void)addMomentNode:(id)arg1 ;
-(NSArray *)facedAssets;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2 ;
-(void)setPeopleUUIDs:(NSSet *)arg1 ;
@end

