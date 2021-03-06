/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class EMDeliveryAccount, NSArray, NSString;


@protocol EMReceivingAccountBuilder <EMAccountBuilder>
@property (nonatomic,retain) EMDeliveryAccount * deliveryAccount; 
@property (nonatomic,retain) NSArray * emailAddresses; 
@property (assign,nonatomic) BOOL sourceIsManaged; 
@property (assign,nonatomic) BOOL shouldArchiveByDefault; 
@property (nonatomic,copy) NSString * statisticsKind; 
@required
-(BOOL)sourceIsManaged;
-(NSArray *)emailAddresses;
-(void)setSourceIsManaged:(BOOL)arg1;
-(void)setEmailAddresses:(id)arg1;
-(NSString *)statisticsKind;
-(EMDeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(id)arg1;
-(BOOL)shouldArchiveByDefault;
-(void)setStatisticsKind:(id)arg1;
-(void)setShouldArchiveByDefault:(BOOL)arg1;

@end

