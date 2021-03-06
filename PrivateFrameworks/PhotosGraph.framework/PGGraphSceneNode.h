/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSArray, PVSceneTaxonomyNode, NSString;

@interface PGGraphSceneNode : PGGraphNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	PVSceneTaxonomyNode* _sceneTaxonomyNode;

}

@property (nonatomic,readonly) PVSceneTaxonomyNode * sceneTaxonomyNode;                      //@synthesize sceneTaxonomyNode=_sceneTaxonomyNode - In the implementation block
@property (nonatomic,readonly) unsigned sceneIdentifier; 
@property (nonatomic,readonly) unsigned long long level; 
@property (nonatomic,readonly) BOOL isIndexed; 
@property (nonatomic,readonly) BOOL isSuitableForSuggestions; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)suggestionWhitelistedScenes;
+(BOOL)isSceneSuitableForSuggestionsWithLabel:(id)arg1 ;
+(BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(unsigned long long)level;
-(NSString *)localizedName;
-(unsigned)sceneIdentifier;
-(BOOL)isIndexed;
-(unsigned long long)numberOfAssets;
-(NSArray *)localizedSynonyms;
-(unsigned long long)numberOfHighConfidenceAssets;
-(BOOL)isSuitableForSuggestions;
-(PVSceneTaxonomyNode *)sceneTaxonomyNode;
@end

