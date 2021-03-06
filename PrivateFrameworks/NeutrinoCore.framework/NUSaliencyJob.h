/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderJob.h>

@class VNSaliencyImageObservation, NUSaliencyRequest;

@interface NUSaliencyJob : NURenderJob {

	VNSaliencyImageObservation* _saliencyObservation;

}

@property (nonatomic,readonly) NUSaliencyRequest * saliencyRequest; 
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(VNSaliencyImageObservation *)saliencyObservation;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithSaliencyRequest:(id)arg1 ;
-(NUSaliencyRequest *)saliencyRequest;
-(id)saliencyObservationForImage:(id)arg1 error:(out id*)arg2 ;
-(void)setSaliencyObservation:(VNSaliencyImageObservation *)arg1 ;
@end

