/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase, NSNumber;

@interface SSWishlist : NSObject {

	long long _accountIdentifier;
	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) long long accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * lastSyncTime; 
+(BOOL)existsForAccountIdentifier:(long long)arg1 ;
-(void)dealloc;
-(long long)accountIdentifier;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)deleteBackingStore;
-(NSNumber *)lastSyncTime;
-(void)setLastSyncTime:(NSNumber *)arg1 ;
@end

