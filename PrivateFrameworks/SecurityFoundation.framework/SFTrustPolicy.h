/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFTrustPolicy : NSObject <NSCopying> {

	id _trustPolicyInternal;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)evaluateCertificateChain:(id)arg1 error:(id*)arg2 ;
@end

