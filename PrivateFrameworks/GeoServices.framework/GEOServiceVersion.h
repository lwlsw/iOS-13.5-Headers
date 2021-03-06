/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOServiceVersion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _versionDomains;
	unsigned _minimumVersion;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,retain) NSMutableArray * versionDomains; 
@property (assign,nonatomic) BOOL hasMinimumVersion; 
@property (assign,nonatomic) unsigned minimumVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)versionDomainType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)versionDomains;
-(BOOL)hasMinimumVersion;
-(unsigned)minimumVersion;
-(void)addVersionDomain:(id)arg1 ;
-(unsigned long long)versionDomainsCount;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)setMinimumVersion:(unsigned)arg1 ;
-(void)setHasMinimumVersion:(BOOL)arg1 ;
@end

