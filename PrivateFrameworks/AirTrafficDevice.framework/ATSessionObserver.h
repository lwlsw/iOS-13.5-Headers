/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:26 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATSessionObserver <NSObject>
@optional
-(void)sessionWillBegin:(id)arg1;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2;
-(void)session:(id)arg1 didBeginSessionTask:(id)arg2;
-(void)sessionDidFinish:(id)arg1;

@end

