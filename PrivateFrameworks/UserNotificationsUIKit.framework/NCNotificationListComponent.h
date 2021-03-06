/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NCNotificationListComponent <NCLegibilitySettingsAdjusting,PLContentSizeCategoryAdjusting>
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated; 
@property (nonatomic,copy) NSString * logDescription; 
@required
-(unsigned long long)count;
-(NSString *)logDescription;
-(unsigned long long)notificationCount;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
-(void)setDeviceAuthenticated:(BOOL)arg1;
-(void)insertNotificationRequest:(id)arg1;
-(void)modifyNotificationRequest:(id)arg1;
-(void)removeNotificationRequest:(id)arg1;
-(void)reloadNotificationRequest:(id)arg1;
-(BOOL)isDeviceAuthenticated;
-(void)setLogDescription:(id)arg1;

@end

