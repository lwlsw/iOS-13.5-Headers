/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphEntityTranslator.h>

@interface PGGraphFaceTranslator : PGGraphEntityTranslator
+(id)entityClassName;
+(BOOL)includesRelationshipChanges;
-(id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_momentChangesForFaceLocalIdentifiers:(id)arg1 ;
@end
