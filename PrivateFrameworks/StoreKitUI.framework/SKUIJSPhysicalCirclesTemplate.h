/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSPhysicalCirclesTemplate.h>

@protocol SKUIJSPhysicalCirclesTemplate <JSExport>
@required
-(void)afterDOMUpdate:(id)arg1;
-(void)performFinishAnimation:(id)arg1;
-(void)performResetAnimation:(id)arg1;

@end


@class SKUIPhysicalCirclesTemplateDOMFeature;

@interface SKUIJSPhysicalCirclesTemplate : IKJSObject <SKUIJSPhysicalCirclesTemplate> {

	SKUIPhysicalCirclesTemplateDOMFeature* _feature;

}
-(id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2 ;
-(void)_performAnimationWithType:(long long)arg1 callback:(id)arg2 ;
-(void)afterDOMUpdate:(id)arg1 ;
-(void)performFinishAnimation:(id)arg1 ;
-(void)performResetAnimation:(id)arg1 ;
@end

