/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BWGraph, NSMutableArray, NSString, NSArray;

@interface FigCapturePipeline : NSObject {

	BWGraph* _graph;
	NSMutableArray* _nodes;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * nodes;              //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BWGraph * graph;              //@synthesize graph=_graph - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(BWGraph *)graph;
-(NSArray *)nodes;
-(BOOL)addNode:(id)arg1 error:(id*)arg2 ;
-(id)initWithGraph:(id)arg1 name:(id)arg2 ;
@end
