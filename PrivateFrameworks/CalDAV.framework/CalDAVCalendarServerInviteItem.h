/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem {

	NSMutableSet* _users;

}

@property (nonatomic,retain) NSMutableSet * users;              //@synthesize users=_users - In the implementation block
-(id)init;
-(NSMutableSet *)users;
-(void)setUsers:(NSMutableSet *)arg1 ;
-(void)addUser:(id)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
@end
