/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackgroundTasks/BackgroundTasks-Structs.h>
#import <BackgroundTasks/BGTaskRequest.h>

@interface BGProcessingTaskRequest : BGTaskRequest {

	BOOL _requiresNetworkConnectivity;
	BOOL _requiresExternalPower;

}

@property (assign) BOOL requiresNetworkConnectivity;              //@synthesize requiresNetworkConnectivity=_requiresNetworkConnectivity - In the implementation block
@property (assign) BOOL requiresExternalPower;                    //@synthesize requiresExternalPower=_requiresExternalPower - In the implementation block
+(Class)_correspondingTaskClass;
+(id)_requestFromActivity:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_activity;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(BOOL)requiresNetworkConnectivity;
-(void)setRequiresExternalPower:(BOOL)arg1 ;
-(BOOL)requiresExternalPower;
@end

