/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFBase64Codec : NSObject
+(const char*)alphabet;
+(const char*)decoder;
+(unsigned long long)encodedUuidLength;
+(BOOL)appendPadding;
+(BOOL)checkTerminators:(long long)arg1 expected:(long long)arg2 ;
+(id)encodeBytes:(const void*)arg1 withLength:(unsigned long long)arg2 ;
+(BOOL)decodeString:(id)arg1 with:(/*^block*/id)arg2 ;
+(id)encodeData:(id)arg1 ;
+(id)encodeUuid:(id)arg1 ;
+(id)decodeString:(id)arg1 ;
+(id)decodeUuid:(id)arg1 ;
-(id)init;
@end

