/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph;

@interface PGSearchMetadataComputer : NSObject {

	PGGraph* _graph;

}

@property (readonly) PGGraph * graph;              //@synthesize graph=_graph - In the implementation block
-(PGGraph *)graph;
-(id)initWithGraph:(id)arg1 ;
-(id)searchMetadataWithOptions:(id)arg1 ;
-(id)_mePersonUUID;
-(id)_sceneWhitelist;
-(id)_blacklistedMeaningsByMeaning;
@end

