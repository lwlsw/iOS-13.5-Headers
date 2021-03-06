/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CPLTimingStatistic : NSObject {

	unsigned long long _recordCount;
	unsigned long long _batchCount;
	unsigned long long _errorCount;
	unsigned long long _cancelCount;
	double _duration;

}
-(id)description;
-(void)updateWithDuration:(double)arg1 recordCount:(unsigned long long)arg2 error:(BOOL)arg3 cancelled:(BOOL)arg4 ;
@end

