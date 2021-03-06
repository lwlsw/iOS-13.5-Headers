/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeballServiceProxyInterface <NSObject>
@property (assign,nonatomic) id<MNTimeballServiceProxyDelegate> delegate; 
@required
-(id<MNTimeballServiceProxyDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;
-(void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
-(void)unsubscribeFromDestination:(id)arg1;
-(void)subscribeToAllDestinations;
-(void)unsubscribeFromAllDestinations;

@end

