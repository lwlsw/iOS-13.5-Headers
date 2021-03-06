/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class UIColor;

@interface SXIssueCoverPresentationOptions : NSObject {

	BOOL _videoPlaybackEnabled;
	UIColor* _parentBackgroundColor;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL videoPlaybackEnabled;                    //@synthesize videoPlaybackEnabled=_videoPlaybackEnabled - In the implementation block
@property (nonatomic,readonly) UIColor * parentBackgroundColor;              //@synthesize parentBackgroundColor=_parentBackgroundColor - In the implementation block
-(CGSize)size;
-(BOOL)videoPlaybackEnabled;
-(id)initWithSize:(CGSize)arg1 videoPlaybackEnabled:(BOOL)arg2 parentBackgroundColor:(id)arg3 ;
-(UIColor *)parentBackgroundColor;
@end

