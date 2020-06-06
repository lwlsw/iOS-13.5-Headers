/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol CRKIDSLocalPrimitives
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@required
-(NSDictionary *)debugInfo;
-(id)listenForMessageSendsWithHandler:(/*^block*/id)arg1;
-(BOOL)sendMessage:(id)arg1 toDestinationAddress:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
-(id)accountForSourceAppleID:(id)arg1;
-(id)listenForMessageReceivesWithHandler:(/*^block*/id)arg1;
-(id)listenForAccountAdditionsWithHandler:(/*^block*/id)arg1;

@end
