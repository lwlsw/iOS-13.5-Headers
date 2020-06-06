/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSDImageProvider, NSString, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject {

	TSDImageProvider* mImageProvider;
	CGSize mDesiredSize;
	NSString* mDisplayName;
	CGPathRef mMaskingPath;
	TSPObjectContext* mObjectContext;

}

@property (nonatomic,retain) TSDImageProvider * imageProvider; 
@property (assign,nonatomic) CGSize desiredSize; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,retain) TSPObjectContext * objectContext; 
@property (assign,nonatomic) CGPathRef maskingPath; 
-(id)init;
-(void)dealloc;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setImageProvider:(TSDImageProvider *)arg1 ;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(TSDImageProvider *)imageProvider;
-(TSPObjectContext *)objectContext;
-(id)initWithImageProvider:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)setObjectContext:(TSPObjectContext *)arg1 ;
-(void)setMaskingPath:(CGPathRef)arg1 ;
-(id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2 ;
-(CGPathRef)maskingPath;
@end
