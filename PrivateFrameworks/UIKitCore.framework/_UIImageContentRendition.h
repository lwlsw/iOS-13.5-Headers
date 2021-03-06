/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor;

@interface _UIImageContentRendition : NSObject {

	BOOL _requiresMasking;
	CGImageRef _CGImage;
	UIColor* _multiplyColor;

}

@property (nonatomic,readonly) CGImageRef CGImage;                   //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) UIColor * multiplyColor;              //@synthesize multiplyColor=_multiplyColor - In the implementation block
@property (nonatomic,readonly) BOOL requiresMasking;                 //@synthesize requiresMasking=_requiresMasking - In the implementation block
+(id)renditionWithCGImage:(CGImageRef)arg1 color:(id)arg2 requiresMasking:(BOOL)arg3 ;
-(void)dealloc;
-(CGImageRef)CGImage;
-(UIColor *)multiplyColor;
-(BOOL)requiresMasking;
@end

