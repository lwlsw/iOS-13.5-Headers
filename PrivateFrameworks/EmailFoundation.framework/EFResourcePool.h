/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class EFQueue, NSMutableSet;

@interface EFResourcePool : NSObject {

	os_unfair_lock_s _handleResourceLock;
	unsigned long long _uncreatedResourcesCount;
	EFQueue* _activeResources;
	NSMutableSet* _inactiveResources;

}

@property (assign,nonatomic) unsigned long long uncreatedResourcesCount;              //@synthesize uncreatedResourcesCount=_uncreatedResourcesCount - In the implementation block
@property (nonatomic,readonly) EFQueue * activeResources;                             //@synthesize activeResources=_activeResources - In the implementation block
@property (nonatomic,readonly) NSMutableSet * inactiveResources;                      //@synthesize inactiveResources=_inactiveResources - In the implementation block
-(id)initWithCount:(unsigned long long)arg1 ;
-(EFQueue *)activeResources;
-(id)acquireResource;
-(void)releaseResource:(id)arg1 ;
-(unsigned long long)uncreatedResourcesCount;
-(void)setUncreatedResourcesCount:(unsigned long long)arg1 ;
-(NSMutableSet *)inactiveResources;
@end
