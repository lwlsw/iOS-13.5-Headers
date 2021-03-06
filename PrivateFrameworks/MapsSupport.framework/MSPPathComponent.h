/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface MSPPathComponent : NSObject <NSCopying> {

	unsigned short _index;
	NSUUID* _originIdentifier;

}

@property (nonatomic,readonly) NSUUID * originIdentifier;              //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned short index;                   //@synthesize index=_index - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned short)index;
-(NSUUID *)originIdentifier;
-(id)initWithIndex:(unsigned short)arg1 originIdentifier:(id)arg2 ;
@end

