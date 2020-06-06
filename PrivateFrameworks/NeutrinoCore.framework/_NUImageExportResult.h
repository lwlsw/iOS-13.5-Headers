/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NUExportResult.h>
#import <libobjc.A.dylib/NUImageExportResult.h>

@class NSURL, NSData, NSString, NUImageGeometry;

@interface _NUImageExportResult : _NUExportResult <NUImageExportResult> {

	NSData* _destinationData;

}

@property (retain) NSURL * destinationURL; 
@property (retain) NSData * destinationData;                         //@synthesize destinationData=_destinationData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) NUImageGeometry * geometry; 
-(NSData *)destinationData;
-(void)setDestinationData:(NSData *)arg1 ;
@end
