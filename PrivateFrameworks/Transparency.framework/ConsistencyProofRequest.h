/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSMutableArray;

@interface ConsistencyProofRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (nonatomic,retain) NSMutableArray * requestsArray; 
@property (nonatomic,readonly) unsigned long long requestsArray_Count; 
+(id)descriptor;
@end
