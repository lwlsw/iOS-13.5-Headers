/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TMLSignalHandler.h>

@class NSString;

@interface TMLBlockSignalHandler : NSObject <TMLSignalHandler> {

	/*^block*/id _block;
	int _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)detach;
-(void)attach;
-(id)callWithArguments:(id)arg1 ;
@end

