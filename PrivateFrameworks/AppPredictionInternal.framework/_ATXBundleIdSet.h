/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {

	_PASCFBurstTrie* _trie;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)containsBundleId:(id)arg1 ;
-(id)trie;
@end

