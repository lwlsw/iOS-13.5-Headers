/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@interface AUExtensionInstanceProxy : NSObject {

	AUv3InstanceBase* _auInstance;

}

@property (assign,nonatomic) AUv3InstanceBase* auInstance;              //@synthesize auInstance=_auInstance - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AUv3InstanceBase*)auInstance;
-(void)setAuInstance:(AUv3InstanceBase*)arg1 ;
@end
