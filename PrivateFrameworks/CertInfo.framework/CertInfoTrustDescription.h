/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CertInfoTrustDescription <NSObject>
@required
-(BOOL)isTrusted;
-(unsigned long long)certificateCount;
-(id)certificatePropertiesAtIndex:(unsigned long long)arg1;
-(id)summaryTitle;
-(id)summarySubtitle;
-(id)summaryDescriptionItems;
-(id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
-(id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
-(id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
-(BOOL)isRootCertificate;

@end

