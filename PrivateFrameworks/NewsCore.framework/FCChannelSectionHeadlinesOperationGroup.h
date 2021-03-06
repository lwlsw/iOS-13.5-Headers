/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCSectionProviding;
@class NSArray;

@interface FCChannelSectionHeadlinesOperationGroup : NSObject {

	id<FCSectionProviding> _section;
	NSArray* _headlines;

}

@property (nonatomic,retain) id<FCSectionProviding> section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSArray * headlines;                         //@synthesize headlines=_headlines - In the implementation block
-(id)init;
-(id)description;
-(id<FCSectionProviding>)section;
-(void)setSection:(id<FCSectionProviding>)arg1 ;
-(NSArray *)headlines;
-(void)setHeadlines:(NSArray *)arg1 ;
-(id)initWithSection:(id)arg1 headlines:(id)arg2 ;
@end

