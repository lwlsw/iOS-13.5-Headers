/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle, UIImage;

@interface PSLazyImagePromise : NSObject {

	NSString* _imagePath;
	NSString* _imageName;
	NSBundle* _imageBundle;
	/*^block*/id _loadBlock;
	UIImage* _image;
	BOOL _imageLoaded;

}

@property (nonatomic,readonly) UIImage * image; 
@property (getter=isImageLoaded,nonatomic,readonly) BOOL imageLoaded;              //@synthesize imageLoaded=_imageLoaded - In the implementation block
+(id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imagePromiseWithImagePath:(id)arg1 ;
+(id)imagePromiseWithLoadBlock:(/*^block*/id)arg1 ;
-(UIImage *)image;
-(void)loadImage;
-(BOOL)isImageLoaded;
@end

