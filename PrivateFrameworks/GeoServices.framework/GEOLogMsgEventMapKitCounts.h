/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying> {

	NSMutableArray* _mapKitCounts;

}

@property (nonatomic,retain) NSMutableArray * mapKitCounts; 
+(BOOL)isValid:(id)arg1 ;
+(Class)mapKitCountsType;
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
-(NSMutableArray *)mapKitCounts;
-(void)setMapKitCounts:(NSMutableArray *)arg1 ;
-(void)addMapKitCounts:(id)arg1 ;
-(unsigned long long)mapKitCountsCount;
-(void)clearMapKitCounts;
-(id)mapKitCountsAtIndex:(unsigned long long)arg1 ;
@end
