/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPSpotlightCollectorObserving <NSObject>
@required
-(void)collector:(id)arg1 didGatherItems:(id)arg2;
-(id)itemPredicateForCollector:(id)arg1;
-(unsigned long long)maximumNumberOfItemsForCollector:(id)arg1;
-(void)collector:(id)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;
-(void)collector:(id)arg1 didRemoveItemIDs:(id)arg2;
-(void)collector:(id)arg1 didUpdateItems:(id)arg2;
-(void)collector:(id)arg1 didEncounterError:(id)arg2;

@end

