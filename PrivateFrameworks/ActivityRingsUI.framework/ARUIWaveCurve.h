/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ARUIWaveCurve : NSObject <NSCopying> {

	SCD_Struct_AR6 _parameters;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithParameters:(SCD_Struct_AR6)arg1 ;
-(float)solveForX:(float)arg1 ;
@end

