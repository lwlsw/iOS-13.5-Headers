/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PMLPlanDescriptor : NSObject <NSCopying> {

	NSString* _name;
	NSString* _version;
	NSString* _locale;

}

@property (nonatomic,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * locale;               //@synthesize locale=_locale - In the implementation block
+(BOOL)isValidPlanId:(id)arg1 ;
+(id)descriptorFromPlanId:(id)arg1 ;
+(id)planIdFromString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)locale;
-(NSString *)version;
-(id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3 ;
@end

