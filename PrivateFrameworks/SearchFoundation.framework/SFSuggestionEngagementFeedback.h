/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback : SFFeedback {

	SFSearchSuggestion* _suggestion;

}

@property (nonatomic,retain) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSuggestion:(SFSearchSuggestion *)arg1 ;
-(SFSearchSuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 ;
@end

