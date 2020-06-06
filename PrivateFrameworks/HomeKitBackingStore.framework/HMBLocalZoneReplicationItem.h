/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel;

@interface HMBLocalZoneReplicationItem : HMFObject {

	HMBModel* _updatedValue;
	HMBModel* _previousValue;

}

@property (nonatomic,readonly) HMBModel * updatedValue;               //@synthesize updatedValue=_updatedValue - In the implementation block
@property (nonatomic,readonly) HMBModel * previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
-(HMBModel *)previousValue;
-(HMBModel *)updatedValue;
@end
