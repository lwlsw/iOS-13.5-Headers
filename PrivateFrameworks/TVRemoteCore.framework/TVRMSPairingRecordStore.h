/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TVRMSPairingRecordStore : NSObject {

	NSMutableDictionary* _pairingRecords;

}
+(id)sharedRecordStore;
-(id)init;
-(void)_synchronizePreferences;
-(id)allPairingRecords;
-(id)pairedServiceNetworkNames;
-(id)pairingRecordForServiceWithNetworkName:(id)arg1 ;
-(void)savePairingRecord:(id)arg1 forServiceWithNetworkName:(id)arg2 ;
-(void)removePairingRecordForServiceWithNetworkName:(id)arg1 ;
@end

