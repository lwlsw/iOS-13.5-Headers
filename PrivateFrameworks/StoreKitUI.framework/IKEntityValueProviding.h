/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKEntityValueProviding <NSObject>
@optional
-(id)stringValueWithNativeValue:(id)arg1 forProperty:(id)arg2;
-(id)nativeValueForStringValue:(id)arg1 forProperty:(id)arg2;

@required
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1;
-(id)valuesForEntityProperties:(id)arg1;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3;

@end

