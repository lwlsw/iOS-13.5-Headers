/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _PASXPCServer : NSObject {

	NSArray* _XPCListeners;

}
+(id)description;
+(void)registerForService:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(id)initWithXPCListeners:(id)arg1 logHandle:(id)arg2 ;
-(void)registerXPCListeners;
@end

