/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DOCThumbnail.h>

@class UIImage, DOCThumbnailRequest, NSString;

@interface DOCIconPromise : NSObject <DOCThumbnail> {

	UIImage* _icon;
	DOCThumbnailRequest* _request;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isLoading;
-(UIImage *)thumbnail;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(BOOL)isRepresentativeIcon;
-(void)scheduleUpdateIfNeeded;
-(BOOL)registerGenerationCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;
@end

