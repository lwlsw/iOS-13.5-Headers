/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventSenderDescriptor.h>

@class BKSHIDEventDisplay;

@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (assign,nonatomic) long long hardwareType; 
@property (nonatomic,copy) BKSHIDEventDisplay * associatedDisplay; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (assign,nonatomic) unsigned long long senderID; 
+(id)new;
-(id)init;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)setHardwareType:(long long)arg1 ;
-(void)setAssociatedDisplay:(BKSHIDEventDisplay *)arg1 ;
-(void)setPrimaryPage:(unsigned)arg1 primaryUsage:(unsigned)arg2 ;
@end

