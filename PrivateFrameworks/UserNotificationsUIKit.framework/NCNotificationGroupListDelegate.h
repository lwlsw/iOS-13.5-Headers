/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationGroupListDelegate <NCNotificationListComponentDelegate>
@required
-(void)notificationGroupListDidRemoveAllNotificationRequests:(id)arg1;
-(void)notificationGroupList:(id)arg1 didRemoveNotificationRequest:(id)arg2;
-(id)notificationGroupList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3;
-(void)notificationGroupList:(id)arg1 requestsScrollToTopOfGroupWithCompletion:(/*^block*/id)arg2;
-(BOOL)notificationGroupListShouldScrollToTop:(id)arg1;
-(BOOL)isViewVisibleForNotificationGroupList:(id)arg1;

@end

