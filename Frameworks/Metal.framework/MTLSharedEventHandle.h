/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedEventHandle : NSObject <NSSecureCoding> {

	MTLSharedEventHandlePrivate* _priv;

}

@property (readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(unsigned)eventPort;
-(unsigned long long)labelTraceID;
-(id)initWithSharedEvent:(id)arg1 ;
@end
