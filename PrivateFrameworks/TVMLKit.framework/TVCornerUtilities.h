/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVCornerUtilities : NSObject
+(TVCornerRadii)radiiFromRadius:(double)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 ;
+(BOOL)radiiIsZero:(TVCornerRadii)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 isContinuous:(BOOL)arg3 ;
+(double)radiusFromCornerRadii:(TVCornerRadii)arg1 ;
+(TVCornerRadii)flipCGOriginRadii:(TVCornerRadii)arg1 ;
@end
