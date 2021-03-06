/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSOSUtilities : NSObject

@property (getter=isMMSEnabled,nonatomic,readonly) BOOL MMSEnabled; 
+(BOOL)isMMSEnabled;
+(id)sharedUtilities;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 ;
-(BOOL)isMMSEnabled;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(BOOL)isMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 ;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(void)_sendMessageAndObserveNotification:(id)arg1 ;
-(id)_sendMessageAndReturnGUIDs:(id)arg1 ;
-(id)_uniqueFilePathForFilename:(id)arg1 ;
-(id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(BOOL)arg3 ;
@end

