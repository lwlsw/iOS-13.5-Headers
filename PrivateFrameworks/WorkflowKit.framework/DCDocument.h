/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface DCDocument : NSObject {

	NSURL* _fileURL;
	id _annotation;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) id annotation;                //@synthesize annotation=_annotation - In the implementation block
+(id)documentWithURL:(id)arg1 annotation:(id)arg2 ;
+(id)documentWithURL:(id)arg1 ;
-(NSURL *)fileURL;
-(id)annotation;
-(void)openWithAppBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 annotation:(id)arg2 ;
@end
