/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ARUIRingsGeometry : NSObject {

	unsigned _circleSegments;
	float _startingRadian;
	float _endingRadian;

}

@property (assign,nonatomic) unsigned circleSegments;              //@synthesize circleSegments=_circleSegments - In the implementation block
@property (assign,nonatomic) float startingRadian;                 //@synthesize startingRadian=_startingRadian - In the implementation block
@property (assign,nonatomic) float endingRadian;                   //@synthesize endingRadian=_endingRadian - In the implementation block
-(id)init;
-(unsigned)vertexCount;
-(unsigned)indexCount;
-(unsigned)circleSegments;
-(float)endingRadian;
-(float)startingRadian;
-(void)enumerateVertexGeometryWithBlock:(/*^block*/id)arg1 ;
-(unsigned short*)connectedIndiciesGeometry;
-(unsigned)disconnectedIndexCount;
-(unsigned short*)disconnectedIndiciesGeometry;
-(void)setCircleSegments:(unsigned)arg1 ;
-(void)setStartingRadian:(float)arg1 ;
-(void)setEndingRadian:(float)arg1 ;
@end
