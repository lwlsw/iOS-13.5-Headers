/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPDDomainIndexerDelegate <NSObject>
@required
-(void)extensionIndexer:(id)arg1 didChangeNeedsAuthentification:(BOOL)arg2;
-(void)extensionIndexer:(id)arg1 didIndexOneBatchWithError:(id)arg2 updatedItems:(id)arg3 deletedIDs:(id)arg4 anchor:(id)arg5 anchorPersisted:(/*^block*/id)arg6;

@end
