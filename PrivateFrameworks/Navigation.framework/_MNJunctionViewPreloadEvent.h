/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOComposedGuidanceEvent;

@interface _MNJunctionViewPreloadEvent : NSObject {

	BOOL _needsPreload;
	GEOComposedGuidanceEvent* _junctionViewEvent;

}

@property (nonatomic,retain) GEOComposedGuidanceEvent * junctionViewEvent;              //@synthesize junctionViewEvent=_junctionViewEvent - In the implementation block
@property (assign,nonatomic) BOOL needsPreload;                                         //@synthesize needsPreload=_needsPreload - In the implementation block
-(GEOComposedGuidanceEvent *)junctionViewEvent;
-(void)setJunctionViewEvent:(GEOComposedGuidanceEvent *)arg1 ;
-(BOOL)needsPreload;
-(void)setNeedsPreload:(BOOL)arg1 ;
@end

