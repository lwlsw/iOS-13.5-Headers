/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding> {

	DNDClientEventDetails* _eventDetails;
	unsigned long long _interruptionSuppression;

}

@property (nonatomic,copy,readonly) DNDClientEventDetails * eventDetails;               //@synthesize eventDetails=_eventDetails - In the implementation block
@property (nonatomic,readonly) unsigned long long interruptionSuppression;              //@synthesize interruptionSuppression=_interruptionSuppression - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)interruptionSuppression;
-(DNDClientEventDetails *)eventDetails;
-(id)initWithEventDetails:(id)arg1 interruptionSuppression:(unsigned long long)arg2 ;
@end
