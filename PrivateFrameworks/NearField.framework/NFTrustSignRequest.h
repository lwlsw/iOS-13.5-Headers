/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFTrustObject.h>

@class NSData;

@interface NFTrustSignRequest : NFTrustObject {

	NSData* _challenge;
	NSData* _data;

}

@property (nonatomic,retain) NSData * challenge;              //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSData * data;                   //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)signRequestWithChallenge:(id)arg1 data:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSData *)challenge;
-(void)setChallenge:(NSData *)arg1 ;
@end

