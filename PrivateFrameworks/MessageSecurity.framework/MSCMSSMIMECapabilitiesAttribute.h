/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSSet;

@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder> {

	NSSet* _capabilities;

}

@property (readonly) NSSet * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(id)init;
-(NSSet *)capabilities;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
@end

