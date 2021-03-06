/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface WBSHistoryDatabaseAccessBroker : NSObject {

	NSURL* _historyDatabaseURL;
	NSObject*<OS_dispatch_queue> _writeRequestQueue;

}
-(id)init;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(/*^block*/id)arg3 ;
-(void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id*)arg3 ;
-(id)initWithHistoryDatabaseURL:(id)arg1 ;
-(id)databaseLastModifiedDate;
@end

