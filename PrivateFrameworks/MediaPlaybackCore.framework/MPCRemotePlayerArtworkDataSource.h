/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource
+(id)sharedDataSource;
+(id)bestArtworkSizes;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)_urlForCatalog:(id)arg1 size:(CGSize)arg2 ;
@end

