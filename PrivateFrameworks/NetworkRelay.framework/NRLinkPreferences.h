/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRLinkPreferences : NSObject <NSCopying> {

	unsigned char _linkType;

}

@property (nonatomic,readonly) unsigned char linkType;              //@synthesize linkType=_linkType - In the implementation block
+(id)createFromEncodedXPCDict:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isNotEmpty;
-(unsigned char)linkType;
-(id)initWithLinkType:(unsigned char)arg1 ;
-(id)copyShortDescription;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
@end

