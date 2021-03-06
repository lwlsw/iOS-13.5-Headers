/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;
@interface ARSCNPlaneGeometry : SCNGeometry {

	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _textureCoordinateBuffer;

}
+(id)planeGeometryWithDevice:(id)arg1 ;
-(void)updateFromPlaneGeometry:(id)arg1 ;
@end

