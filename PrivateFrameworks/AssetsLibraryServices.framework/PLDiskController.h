/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLDiskController : NSObject {

	double _lastFSCheck;
	long long _bytesRequiredForPhoto;
	struct {
		unsigned needToCheckDiskSpace : 1;
		unsigned probablyLowOnDiskSpace : 1;
		unsigned isAssetsd : 1;
		unsigned extra : 28;
	}  _flags;

}
+(id)sharedInstance;
+(long long)diskSpaceAvailableForPath:(id)arg1 ;
+(BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg1 ;
+(long long)fileSystemSizeForPath:(id)arg1 ;
+(id)mountPointForPath:(id)arg1 ;
+(long long)freeDiskSpaceThreshold;
+(long long)diskSpaceAvailableForUse;
-(id)init;
-(void)dealloc;
-(void)updateAvailableDiskSpace;
-(void)_diskSpaceDidBecomeLow;
-(void)_actuallyUpdateCookie;
-(void)_updateCookie;
-(BOOL)hasEnoughDiskToTakePicture;
-(long long)bytesToAutomaticallyClear;
@end

