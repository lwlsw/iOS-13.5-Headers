/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, PLCloudPhotoLibraryManager;

@interface PLCloudBatchDownloader : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _manager;

}
+(id)_adjustmentStateDictionaryForComparingIncomingFaceRecordForAsset:(id)arg1 ;
-(id)handleIncomingBatch:(id)arg1 ;
-(id)deletedRecordsFromBatch:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 manager:(id)arg2 ;
-(void)_saveIfNeeded;
-(id)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2 includesTiboSchema:(BOOL*)arg3 ;
-(void)_dropDeferredRebuildFacesInPhotoLibrary:(id)arg1 ;
-(void)_mergeExistingPersonsWithPerson:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)_mergeTargetFromPersons:(id)arg1 ;
-(void)_handleScopeChanges:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2 ;
-(id)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2 ;
-(id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3 ;
-(id)_handleAssetRecords:(id)arg1 inSyncContext:(id)arg2 withChangeBatch:(id)arg3 dedupeGraphPersons:(id*)arg4 ;
-(void)_handleMemoryRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleSuggestionRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_processNotificationUpdatesForSuggestions:(id)arg1 ;
-(void)_processNotificationUpdatesForMemories:(id)arg1 ;
-(void)_mergeUpdatedPersons:(id)arg1 inLibrary:(id)arg2 ;
-(void)_dedupePersonsInSyncContext:(id)arg1 ;
-(void)_handleFaceCropRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2 ;
-(id)_debugPrintAlbumOrderForAssets:(id)arg1 ;
-(void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_triggerBackgroundDownloadFailureForResources:(id)arg1 ;
@end

