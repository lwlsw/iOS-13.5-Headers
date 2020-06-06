/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppStoreKit/AppStoreKit-Structs.h>
@class NSMutableArray;

@interface _ASKResourceCacheGroup : NSObject {

	NSMutableArray* _memberContents;
	os_unfair_lock_s _guard;
	BOOL _hasMultipleMembers;

}

@property (assign) BOOL hasMultipleMembers;              //@synthesize hasMultipleMembers=_hasMultipleMembers - In the implementation block
-(id)init;
-(void)setHasMultipleMembers:(BOOL)arg1 ;
-(id)snapshotMemberContents;
-(id)onlyMemberContents;
-(id)makeMemberContents;
-(void)discardMemberContents:(id)arg1 ;
-(BOOL)hasMultipleMembers;
@end
