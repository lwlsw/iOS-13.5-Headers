/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDictionary, NSDate;

@interface FCTopStoriesGroupConfig : FCGroupConfig {

	NSArray* _mandatoryArticleIDPairs;
	NSArray* _optionalArticleIDs;
	NSDictionary* _topStoriesMetadataByArticleID;
	NSDate* _publishDate;

}

@property (nonatomic,retain) NSDictionary * topStoriesMetadataByArticleID;              //@synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID - In the implementation block
@property (nonatomic,readonly) NSArray * mandatoryArticleIDPairs;                       //@synthesize mandatoryArticleIDPairs=_mandatoryArticleIDPairs - In the implementation block
@property (nonatomic,readonly) NSArray * optionalArticleIDs;                            //@synthesize optionalArticleIDs=_optionalArticleIDs - In the implementation block
@property (nonatomic,readonly) NSDate * publishDate;                                    //@synthesize publishDate=_publishDate - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)publishDate;
-(NSArray *)mandatoryArticleIDPairs;
-(NSArray *)optionalArticleIDs;
-(NSDictionary *)topStoriesMetadataByArticleID;
-(void)setTopStoriesMetadataByArticleID:(NSDictionary *)arg1 ;
@end

