/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSString;

@interface RBBundlePropertiesBSXPCProvider : NSObject <BSDescriptionProviding> {

	NSMutableDictionary* _propertiesByIdentifier;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)propertiesForIdentifier:(id)arg1 ;
-(void)removePropertiesForIdentifier:(id)arg1 ;
@end
