/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPMusicKitTokenHelper : NSObject {

	NSString* _clientIdentifier;
	NSString* _clientVersion;

}

@property (nonatomic,copy) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientVersion;                 //@synthesize clientVersion=_clientVersion - In the implementation block
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)clientInfo;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)fetchDeveloperTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMusicUserTokenWithDeveloperToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDeveloperAndMusicUserTokensWithCompletion:(/*^block*/id)arg1 ;
@end

