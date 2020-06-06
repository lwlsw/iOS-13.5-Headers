/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying> {

	NSMutableArray* _locationConsumptionScoreInfos;

}

@property (nonatomic,retain) NSMutableArray * locationConsumptionScoreInfos;              //@synthesize locationConsumptionScoreInfos=_locationConsumptionScoreInfos - In the implementation block
+(Class)locationConsumptionScoreInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addLocationConsumptionScoreInfo:(id)arg1 ;
-(unsigned long long)locationConsumptionScoreInfosCount;
-(void)clearLocationConsumptionScoreInfos;
-(id)locationConsumptionScoreInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)locationConsumptionScoreInfos;
-(void)setLocationConsumptionScoreInfos:(NSMutableArray *)arg1 ;
@end
