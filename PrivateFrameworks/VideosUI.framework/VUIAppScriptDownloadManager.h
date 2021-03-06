/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSMutableDictionary, NSURL, NSURLSessionDataTask;

@interface VUIAppScriptDownloadManager : NSObject {

	NSURLSession* _session;
	NSMutableDictionary* _completionBlocksDict;
	NSURL* _currentURL;
	NSMutableDictionary* _appScriptDict;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSURL * currentURL;                               //@synthesize currentURL=_currentURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appScriptDict;              //@synthesize appScriptDict=_appScriptDict - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSURL *)currentURL;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(void)setAppScriptDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)appScriptDict;
-(void)fetchAppJavascript:(id)arg1 cachePolicy:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

