/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <libobjc.A.dylib/KCJoiningAcceptCircleDelegate.h>

@class NSString;

@interface KCJoiningAcceptAccountCircleDelegate : NSObject <KCJoiningAcceptCircleDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegate;
-(id)circleJoinDataFor:(OpaqueSOSPeerInfoRef)arg1 error:(id*)arg2 ;
-(id)circleGetInitialSyncViews:(unsigned)arg1 error:(id*)arg2 ;
@end

