/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol PIVideoReframeResult <NURenderResult>
@property (nonatomic,copy,readonly) NSArray * keyframes; 
@property (nonatomic,readonly) SCD_Struct_PI6 stabCropRect; 
@property (nonatomic,readonly) double confidence; 
@required
-(double)confidence;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;

@end

