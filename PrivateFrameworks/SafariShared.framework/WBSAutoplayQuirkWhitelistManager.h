/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSRemotePlistController;

@interface WBSAutoplayQuirkWhitelistManager : NSObject {

	WBSRemotePlistController* _remotePlistController;

}
-(id)init;
-(void)prepareForTermination;
-(id)initWithBuiltInWhitelistURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
-(void)quirksForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
