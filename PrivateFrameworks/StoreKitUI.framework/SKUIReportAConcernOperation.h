/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SKUIReportAConcernMetadata;

@interface SKUIReportAConcernOperation : ISOperation {

	NSDictionary* _responseDictionary;
	SKUIReportAConcernMetadata* _metadata;

}

@property (nonatomic,retain) SKUIReportAConcernMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (copy) NSDictionary * responseDictionary;                              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(void)run;
-(void)setMetadata:(SKUIReportAConcernMetadata *)arg1 ;
-(SKUIReportAConcernMetadata *)metadata;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(id)_httpBody;
@end

