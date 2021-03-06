/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIAccordionFoldTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputBottomHeight;
	NSNumber* inputNumberOfFolds;
	NSNumber* inputFoldShadowAmount;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputBottomHeight; 
@property (nonatomic,retain) NSNumber * inputNumberOfFolds; 
@property (nonatomic,retain) NSNumber * inputFoldShadowAmount; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(id)_kernelWarpS;
-(id)_kernelWarpT;
-(id)_kernelMix;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputBottomHeight;
-(void)setInputBottomHeight:(NSNumber *)arg1 ;
-(NSNumber *)inputNumberOfFolds;
-(void)setInputNumberOfFolds:(NSNumber *)arg1 ;
-(NSNumber *)inputFoldShadowAmount;
-(void)setInputFoldShadowAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputTime;
-(void)setInputTime:(NSNumber *)arg1 ;
@end

