/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKConfigurationSource.h>

@protocol CRKConfigurationSource;
@class NSString;

@interface CRKCurrentPlatformProfileConfigurationSource : NSObject <CRKConfigurationSource> {

	id<CRKConfigurationSource> mBaseSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCallbackQueue:(id)arg1 ;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(id)makeSourceForCurrentPlatformWithCallbackQueue:(id)arg1 ;
-(id)makeiOSConfigurationSourceWithCallbackQueue:(id)arg1 ;
-(id)makeMacOSConfigurationSourceWithCallbackQueue:(id)arg1 ;
@end

