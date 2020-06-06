/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKStoreId : NSObject <NSSecureCoding> {

	 underlyingStoreId;

}

@property (readonly,nonatomic) NSNumber * numberValue; 
@property (readonly,nonatomic) NSString * stringValue; 
@property (readonly,nonatomic) long long longValue; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)init;
-(long long)longValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(id)initWithInteger:(long long)arg1 ;
-(NSNumber *)numberValue;
-(id)initWithNumber:(id)arg1 ;
@end
