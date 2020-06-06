/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOCompanionRouteContext;

@interface MKURLContext : NSObject {

	BOOL _originatedFromWatch;
	GEOCompanionRouteContext* _companionRouteContext;

}

@property (nonatomic,readonly) BOOL originatedFromWatch;                                           //@synthesize originatedFromWatch=_originatedFromWatch - In the implementation block
@property (nonatomic,copy,readonly) GEOCompanionRouteContext * companionRouteContext;              //@synthesize companionRouteContext=_companionRouteContext - In the implementation block
-(id)initWithOriginatedFromWatch:(BOOL)arg1 companionRouteContext:(id)arg2 ;
-(GEOCompanionRouteContext *)companionRouteContext;
-(BOOL)originatedFromWatch;
@end
