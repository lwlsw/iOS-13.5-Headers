/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCCompositionFragment.h>

@class NSURL;

@interface RCMutableCompositionFragment : RCCompositionFragment

@property (nonatomic,retain) NSURL * AVOutputURL; 
@property (assign,nonatomic) double contentDuration; 
@property (assign,nonatomic) SCD_Struct_RC3 timeRangeInContentToUse; 
@property (assign,nonatomic) SCD_Struct_RC3 timeRangeInComposition; 
-(BOOL)intersectWithTimeRange:(SCD_Struct_RC3)arg1 ;
@end

