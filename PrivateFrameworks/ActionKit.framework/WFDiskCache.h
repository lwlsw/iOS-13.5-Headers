/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:40 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL;

@interface WFDiskCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _cacheURL;

}

@property (nonatomic,copy,readonly) NSURL * cacheURL;              //@synthesize cacheURL=_cacheURL - In the implementation block
+(id)workflowCache;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSURL *)cacheURL;
-(id)fileURLForKey:(id)arg1 ;
-(id)initWithApplicationGroupIdentifier:(id)arg1 name:(id)arg2 ;
-(id)initWithCacheDirectory:(id)arg1 name:(id)arg2 ;
-(id)initWithCacheURL:(id)arg1 name:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)objectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKeyComponents:(id)arg2 ;
-(void)removeObjectForKeyComponents:(id)arg1 ;
-(id)objectForKeyComponents:(id)arg1 ;
-(void)actuallySetObject:(id)arg1 forKey:(id)arg2 ;
-(void)actuallyRemoveObjectForKey:(id)arg1 ;
-(id)actuallyGetObjectForKey:(id)arg1 ;
@end

