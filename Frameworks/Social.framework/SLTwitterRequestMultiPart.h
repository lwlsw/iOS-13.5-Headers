/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface SLTwitterRequestMultiPart : NSObject {

	NSData* _payload;
	NSString* _name;
	NSString* _type;

}

@property (nonatomic,retain) NSData * payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                 //@synthesize type=_type - In the implementation block
+(id)multipartBoundary;
+(id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 ;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(id)partData;
-(id)imagePartData;
-(id)formPartData;
@end

