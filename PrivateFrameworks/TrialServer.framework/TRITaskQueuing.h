/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRITaskQueuing
@required
-(unsigned long long)count;
-(void)stop;
-(BOOL)addTask:(id)arg1;
-(BOOL)cancelTask:(id)arg1;
-(BOOL)cancelTasksWithTag:(id)arg1;
-(BOOL)resumeWithXPCActivityDescriptor:(id)arg1 executeWhenSuspended:(/*^block*/id)arg2;

@end

