/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLRampingResponse : PBCodable <NSCopying> {

	NSMutableArray* _responses;

}

@property (nonatomic,retain) NSMutableArray * responses;              //@synthesize responses=_responses - In the implementation block
+(Class)responseType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addResponse:(id)arg1 ;
-(NSMutableArray *)responses;
-(unsigned long long)responsesCount;
-(void)clearResponses;
-(id)responseAtIndex:(unsigned long long)arg1 ;
-(void)setResponses:(NSMutableArray *)arg1 ;
@end

