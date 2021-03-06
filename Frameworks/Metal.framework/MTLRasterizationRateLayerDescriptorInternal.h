/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRasterizationRateLayerDescriptor.h>

@class MTLRasterizationRateSampleArrayInternal;

@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor {

	float* _data;
	SCD_Struct_MT11 _size;
	MTLRasterizationRateSampleArrayInternal* _horizontal;
	MTLRasterizationRateSampleArrayInternal* _vertical;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_MT11)sampleCount;
-(id)horizontal;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithSampleCount:(SCD_Struct_MT11)arg1 ;
-(id)initWithSampleCount:(SCD_Struct_MT11)arg1 horizontal:(const float*)arg2 vertical:(const float*)arg3 ;
-(float*)horizontalSampleStorage;
-(float*)verticalSampleStorage;
-(id)vertical;
@end

