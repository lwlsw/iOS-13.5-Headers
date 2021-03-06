/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIView.h>

@interface SSBlurView : UIView

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double blurRadius; 
+(Class)layerClass;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_backdropLayer;
-(double)blurRadius;
@end

