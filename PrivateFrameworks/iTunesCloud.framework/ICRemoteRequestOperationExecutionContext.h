/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRemoteRequestOperation;

@interface ICRemoteRequestOperationExecutionContext : NSObject <NSSecureCoding> {

	ICRemoteRequestOperation* _remoteRequestOperation;
	long long _qualityOfService;

}

@property (nonatomic,readonly) ICRemoteRequestOperation * remoteRequestOperation;              //@synthesize remoteRequestOperation=_remoteRequestOperation - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                       //@synthesize qualityOfService=_qualityOfService - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(id)initWithRemoteRequestOperation:(id)arg1 ;
-(ICRemoteRequestOperation *)remoteRequestOperation;
@end

