/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDThreadScopeManagerDataSource
@required
-(void)threadScopeManager:(id)arg1 gatherStatisticsForThreadScopesWithDatabaseIDs:(id)arg2 block:(/*^block*/id)arg3;
-(BOOL)threadScopeManager:(id)arg1 mailboxScopeExists:(id)arg2;
-(BOOL)threadScopeManager:(id)arg1 isValidMailboxObjectID:(id)arg2;
-(void)threadScopeManager:(id)arg1 populateThreadScopesWithBlock:(/*^block*/id)arg2;
-(BOOL)threadScopeManager:(id)arg1 evictThreadScopesWithDatabaseIDs:(id)arg2 completionBlock:(/*^block*/id)arg3;

@end

