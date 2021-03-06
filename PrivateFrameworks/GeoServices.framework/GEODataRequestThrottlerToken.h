/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding> {

	double _createdAt;
	SCD_Struct_GE94 _kind;
	NSString* _bundleId;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)refresh;
-(id)initWithXPCCoder:(id)arg1 ;
-(void)encodeWithXPCCoder:(id)arg1 ;
-(id)initWithRequest:(SCD_Struct_GE94)arg1 forClient:(id)arg2 ;
-(BOOL)isValidForRequest:(SCD_Struct_GE94)arg1 client:(id)arg2 ;
@end

