/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol TIUserDictionaryServing <NSObject>
@property (nonatomic,copy,readonly) NSUUID * userDictionaryUUID; 
@required
-(id)addObserver:(/*^block*/id)arg1;
-(void)removeObserver:(id)arg1;
-(void)startServer;
-(NSUUID *)userDictionaryUUID;
-(void)getPhraseShortcutPairs:(/*^block*/id)arg1;

@end

