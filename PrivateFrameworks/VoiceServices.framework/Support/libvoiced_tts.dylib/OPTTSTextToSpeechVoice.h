/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface OPTTSTextToSpeechVoice : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechVoice* _root;

}

@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * gender; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSString * quality; 
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
-(NSString *)language;
-(NSString *)quality;
-(NSString *)gender;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechVoice*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechVoice>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechVoice*)arg2 ;
-(id)vs_voice;
@end

