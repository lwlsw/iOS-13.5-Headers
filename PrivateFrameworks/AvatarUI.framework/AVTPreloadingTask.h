/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTPreloadingTask <AVTCancelable>
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler; 
@required
-(void)setCanceled:(BOOL)arg1;
-(id)completionHandler;
-(BOOL)isCanceled;

@end

