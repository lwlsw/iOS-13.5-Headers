/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBReusableViewMapDelegate <NSObject>
@optional
-(id)viewMap:(id)arg1 makeNewViewOfClass:(Class)arg2;
-(BOOL)viewMap:(id)arg1 shouldRecycleView:(id)arg2;

@required
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
-(id)recycledViewsContainerProviderForViewMap:(id)arg1;

@end

