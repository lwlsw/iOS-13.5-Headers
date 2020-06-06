/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NearField-Structs.h>
#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFSeshatSessionCallbacks.h>

@class NSString;

@interface NFSeshatSession : NFSession <NFSeshatSessionCallbacks>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTransientError:(SCD_Struct_NF2)arg1 ;
-(SCD_Struct_NF2)allocateSlot:(unsigned char)arg1 authorizingUser:(unsigned char)arg2 authorizingUserToken:(id)arg3 outToken:(id*)arg4 outWriteCount:(unsigned*)arg5 ;
-(SCD_Struct_NF2)derive:(unsigned char)arg1 userHash:(id)arg2 outData:(id*)arg3 outWriteCount:(unsigned*)arg4 ;
-(SCD_Struct_NF2)resetCounter:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(unsigned*)arg3 ;
-(SCD_Struct_NF2)authorizeUpdate:(BOOL)arg1 slotIndex:(unsigned char)arg2 userToken:(id)arg3 outWriteCount:(unsigned*)arg4 ;
-(SCD_Struct_NF2)deleteSlot:(unsigned char)arg1 outWriteCount:(unsigned*)arg2 ;
-(SCD_Struct_NF2)upgradeKey:(unsigned char)arg1 inputData:(id)arg2 outWriteCount:(unsigned*)arg3 ;
-(SCD_Struct_NF2)getData:(id*)arg1 updateKUD:(char*)arg2 outWriteLimit:(unsigned*)arg3 outWriteCount:(unsigned*)arg4 ;
-(SCD_Struct_NF2)obliterate;
-(SCD_Struct_NF2)getHash:(id*)arg1 ;
@end
