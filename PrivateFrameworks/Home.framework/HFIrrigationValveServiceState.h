/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFServiceState.h>

@interface HFIrrigationValveServiceState : HFServiceState {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
+(unsigned long long)_typeForSystemActiveState:(BOOL)arg1 usageState:(long long)arg2 ;
-(unsigned long long)type;
-(long long)priority;
-(BOOL)isTransitioning;
-(long long)primaryState;
-(id)initWithBatchReadResponse:(id)arg1 ;
-(id)stateTypeIdentifier;
@end

