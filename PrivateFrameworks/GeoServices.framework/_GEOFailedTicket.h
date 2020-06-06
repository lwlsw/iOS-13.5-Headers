/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSError;

@interface _GEOFailedTicket : GEOAbstractMapServiceTicket {

	NSError* _error;

}
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithError:(id)arg1 traits:(id)arg2 ;
@end
