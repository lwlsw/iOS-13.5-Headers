/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLThumbPersistenceManager;
@class NSMutableArray, NSString;

@interface PLTemporaryImageTable : NSObject {

	id<PLThumbPersistenceManager> _imageTable;
	unsigned long long _nextTableEntryIndex;
	NSMutableArray* _itemIndexToThumbEntryMapping;
	NSString* _imageTablePath;
	unsigned short _imageFormat;

}
-(void)dealloc;
-(void)reset;
-(void)_cleanup;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(void)_positional_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4 ;
-(id)initWithWithPath:(id)arg1 imageFormat:(unsigned short)arg2 ;
-(void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1 ;
-(id)imageForItemAtIndex:(unsigned long long)arg1 ;
-(void)insertItemAtIndex:(unsigned long long)arg1 ;
@end

