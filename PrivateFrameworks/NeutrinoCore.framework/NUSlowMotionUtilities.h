/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUSlowMotionUtilities : NSObject
+(id)slomoFactory;
+(id)photosFormatsSlomoFactory;
+(id)slowMotionVideoFromAsset:(id)arg1 rate:(float)arg2 range:(SCD_Struct_NU14)arg3 error:(out id*)arg4 ;
+(id)slowMotionAudioMixFromAsset:(id)arg1 rate:(float)arg2 range:(SCD_Struct_NU14)arg3 error:(out id*)arg4 ;
+(id)timeMapperForAssetDuration:(double)arg1 rate:(float)arg2 range:(SCD_Struct_NU14)arg3 error:(out id*)arg4 ;
@end

