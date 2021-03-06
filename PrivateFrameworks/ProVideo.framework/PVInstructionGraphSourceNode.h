/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphNode.h>

@class PVTransformAnimation;

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode {

	int _textureWrapMode;
	PVTransformAnimation* _transformAnimation;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGAffineTransform transform;                            //@synthesize transform=_transform - In the implementation block
@property (nonatomic,retain) PVTransformAnimation * transformAnimation;              //@synthesize transformAnimation=_transformAnimation - In the implementation block
@property (assign,nonatomic) int textureWrapMode;                                    //@synthesize textureWrapMode=_textureWrapMode - In the implementation block
-(id)init;
-(CGAffineTransform)transform;
-(BOOL)isPortrait;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(PVTransformAnimation *)transformAnimation;
-(void)setTransformAnimation:(PVTransformAnimation *)arg1 ;
-(id)getAllSourceNodes;
-(id)instructionGraphNodeDescription;
-(int)textureWrapMode;
-(HGRef<HGNode>*)applyWrapModeToInput:(HGRef<HGNode>*)arg1 ;
-(void)setTextureWrapMode:(int)arg1 ;
@end

