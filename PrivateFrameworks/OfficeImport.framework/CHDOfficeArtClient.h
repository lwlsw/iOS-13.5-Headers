/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>

@class CHDAnchor, NSString;

@interface CHDOfficeArtClient : NSObject <OADClient> {

	CHDAnchor* mAnchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(BOOL)hasBounds;
@end

