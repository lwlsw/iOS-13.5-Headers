/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHMediaFormatConversionRequest;

@interface PHMediaFormatConversionJob : NSObject {

	PHMediaFormatConversionRequest* _conversionRequest;
	/*^block*/id _completionHandler;

}

@property (retain) PHMediaFormatConversionRequest * conversionRequest;              //@synthesize conversionRequest=_conversionRequest - In the implementation block
@property (copy) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(PHMediaFormatConversionRequest *)conversionRequest;
-(void)setConversionRequest:(PHMediaFormatConversionRequest *)arg1 ;
@end

