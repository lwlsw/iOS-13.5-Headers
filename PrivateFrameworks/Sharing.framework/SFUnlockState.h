/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SFUnlockState : NSObject <NSSecureCoding> {

	NSNumber* _unlockEnabled;
	NSNumber* _remotePasscodeEnabled;

}

@property (readonly) NSNumber * unlockEnabled;                      //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (readonly) NSNumber * remotePasscodeEnabled;              //@synthesize remotePasscodeEnabled=_remotePasscodeEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)unlockEnabled;
-(id)initWithUnlockEnabled:(id)arg1 remotePasscodeEnabled:(id)arg2 ;
-(NSNumber *)remotePasscodeEnabled;
@end

