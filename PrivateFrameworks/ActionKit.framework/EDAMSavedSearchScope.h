/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:41 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMSavedSearchScope : FATObject {

	NSNumber* _includeAccount;
	NSNumber* _includePersonalLinkedNotebooks;
	NSNumber* _includeBusinessLinkedNotebooks;

}

@property (nonatomic,retain) NSNumber * includeAccount;                              //@synthesize includeAccount=_includeAccount - In the implementation block
@property (nonatomic,retain) NSNumber * includePersonalLinkedNotebooks;              //@synthesize includePersonalLinkedNotebooks=_includePersonalLinkedNotebooks - In the implementation block
@property (nonatomic,retain) NSNumber * includeBusinessLinkedNotebooks;              //@synthesize includeBusinessLinkedNotebooks=_includeBusinessLinkedNotebooks - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)includeAccount;
-(void)setIncludeAccount:(NSNumber *)arg1 ;
-(NSNumber *)includePersonalLinkedNotebooks;
-(void)setIncludePersonalLinkedNotebooks:(NSNumber *)arg1 ;
-(NSNumber *)includeBusinessLinkedNotebooks;
-(void)setIncludeBusinessLinkedNotebooks:(NSNumber *)arg1 ;
@end

