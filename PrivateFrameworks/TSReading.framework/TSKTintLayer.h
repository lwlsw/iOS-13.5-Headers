/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer {

	CALayer* _contentsLayer;

}

@property (nonatomic,retain) CALayer * contentsLayer;              //@synthesize contentsLayer=_contentsLayer - In the implementation block
@property (assign) CGColorRef tintColor; 
-(void)dealloc;
-(id)contents;
-(void)setContents:(id)arg1 ;
-(CGColorRef)tintColor;
-(void)setTintColor:(CGColorRef)arg1 ;
-(void)setNeedsDisplay;
-(void)layoutSublayers;
-(void)setContentsLayer:(CALayer *)arg1 ;
-(CALayer *)contentsLayer;
@end

