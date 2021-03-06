/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSDFPSCounter : NSObject {

	NSMutableArray* _dateArray;

}
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2 ;
-(id)p_fpsSummaryStringIncludingGraph:(BOOL)arg1 ;
-(id)p_getFPSInfo:(BOOL)arg1 ;
-(void)addFrame;
-(void)addFrameAtDrawTime:(double)arg1 ;
-(id)fpsSummaryString;
-(id)fpsGraphString;
-(void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(BOOL)arg6 slide:(long long)arg7 ;
@end

