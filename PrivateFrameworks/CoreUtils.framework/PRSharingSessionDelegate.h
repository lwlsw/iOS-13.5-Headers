/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PRSharingSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didChangeProximitySensorState:(unsigned long long)arg2;

@required
-(void)session:(id)arg1 didEstimateScores:(id)arg2;
-(void)session:(id)arg1 didFailwithError:(id)arg2;

@end

