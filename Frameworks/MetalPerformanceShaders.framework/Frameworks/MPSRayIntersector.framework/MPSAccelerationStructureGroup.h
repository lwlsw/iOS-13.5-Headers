/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
@interface MPSAccelerationStructureGroup : NSObject {

	MPSBVHGroup* _bvhGroup;

}

@property (nonatomic,readonly) id<MTLDevice> device; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
-(MPSBVHGroup*)bvhGroup;
-(id)initWithDevice:(id)arg1 storageMode:(unsigned long long)arg2 ;
@end

