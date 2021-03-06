/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSDictionary, UIImage;

@interface BCImage : NSObject {

	NSData* _imageData;
	NSString* _identifier;
	NSString* _imageDescription;

}

@property (nonatomic,retain) NSData * imageData;                            //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * imageDescription;                   //@synthesize imageDescription=_imageDescription - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) UIImage * image; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIImage *)image;
-(NSDictionary *)dictionaryValue;
-(NSData *)imageData;
-(NSString *)imageDescription;
-(void)setImageDescription:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3 ;
@end

