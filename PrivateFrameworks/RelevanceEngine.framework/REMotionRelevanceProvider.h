/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REMotionRelevanceProvider : RERelevanceProvider {

	unsigned long long _motionTypes;

}

@property (nonatomic,readonly) unsigned long long motionTypes;              //@synthesize motionTypes=_motionTypes - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithMotionTypes:(unsigned long long)arg1 ;
-(unsigned long long)motionTypes;
@end
