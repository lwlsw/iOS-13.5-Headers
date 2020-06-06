/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSError, SKPaymentTransaction, SKPayment, NSDate, NSData;

@interface SKPaymentTransactionInternal : NSObject {

	NSString* _uuid;
	NSArray* _downloads;
	NSError* _error;
	SKPaymentTransaction* _originalTransaction;
	SKPayment* _payment;
	NSString* _temporaryIdentifier;
	NSDate* _transactionDate;
	NSString* _transactionIdentifier;
	NSData* _transactionReceipt;
	long long _transactionState;

}
-(id)init;
@end
