/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAAccessory, NSString, NSInputStream, NSOutputStream;

@interface EASession : NSObject {

	EAAccessory* _accessory;
	unsigned _sessionID;
	NSString* _protocolString;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	BOOL _openCompleted;
	int _sock;
	BOOL _useSocketInterfaceForEASession;
	NSString* _eaSessionUUIDFromCoreAccessories;

}

@property (nonatomic,readonly) EAAccessory * accessory;                    //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * protocolString;                  //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSOutputStream *)outputStream;
-(id)_shortDescription;
-(unsigned)_sessionID;
-(NSInputStream *)inputStream;
-(EAAccessory *)accessory;
-(NSString *)protocolString;
-(id)initWithAccessory:(id)arg1 forProtocol:(id)arg2 ;
-(void)_handleIncomingEAData:(id)arg1 ;
-(id)EASessionUUID;
-(void)_streamClosed;
-(void)_endStreams;
-(BOOL)isOpenCompleted;
-(void)setOpenCompleted:(BOOL)arg1 ;
@end
