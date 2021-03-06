/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, CNContactFormatter;

@interface FMFContactUtility : NSObject {

	CNContactStore* _contactStore;
	CNContactFormatter* _contactFormatter;

}

@property (nonatomic,retain) CNContactStore * contactStore;                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
+(id)sharedInstance;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)contactKeys;
-(id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2 ;
-(id)findOptimalContactInContacts:(id)arg1 ;
-(id)displayNameForContact:(id)arg1 andHandle:(id)arg2 ;
-(id)getContactForHandle:(id)arg1 ;
@end

