/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPOrderedReplica.h>
#import <libobjc.A.dylib/MSPCloudReplica.h>
#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaDataSerialization.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaSerialization.h>

@class NSData, NSString, NSArray;

@interface MSPCollectionsReplica : MSPOrderedReplica <MSPCloudReplica, MSPContainerStateSnapshot, MSPPropertyListReplicaDataSerialization, MSPPropertyListReplicaSerialization>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * contents; 
@property (nonatomic,readonly) NSData * propertyListDataRepresentation; 
@property (nonatomic,readonly) id propertyListRepresentation; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)contents;
-(id)propertyListRepresentation;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
-(id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(/*^block*/id)arg2 ;
-(Class)replicaRecordClass;
-(id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3 ;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL*)arg3 ;
-(id)propertyListRepresentationDecoratingRecordsWithBlock:(/*^block*/id)arg1 ;
-(NSData *)propertyListDataRepresentation;
-(id)mergeOptionsWithLastSyncDate:(id)arg1 ;
@end

