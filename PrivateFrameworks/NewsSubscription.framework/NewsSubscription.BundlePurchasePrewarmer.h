/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>

@interface NewsSubscription.BundlePurchasePrewarmer : NSObject <FCBundleSubscriptionChangeObserver, FCNetworkReachabilityObserving> {

	 configurationManager;
	 networkReachability;
	 bundleSubscriptionManager;
	 purchaseManager;
	 cachedPurchaseModel;
	 accessLock;

}
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(id)init;
@end
