/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class PUAssetsDataSource;

@interface AEWrappedAssetsDataSource : PXAssetsDataSource {

	PUAssetsDataSource* __reviewAssetsDataSource;

}

@property (nonatomic,readonly) PUAssetsDataSource * _reviewAssetsDataSource;              //@synthesize _reviewAssetsDataSource=__reviewAssetsDataSource - In the implementation block
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)initWithReviewAssetsDataSource:(id)arg1 ;
-(PUAssetsDataSource *)_reviewAssetsDataSource;
@end
