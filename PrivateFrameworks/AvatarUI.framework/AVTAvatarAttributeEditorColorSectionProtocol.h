/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVTAvatarColorVariationStore, NSArray;


@protocol AVTAvatarAttributeEditorColorSectionProtocol <AVTAvatarAttributeEditorSection>
@property (nonatomic,readonly) AVTAvatarColorVariationStore * colorVariationStore; 
@property (nonatomic,copy,readonly) NSArray * primaryItems; 
@property (nonatomic,copy,readonly) NSArray * extendedItems; 
@property (nonatomic,readonly) BOOL alwaysShowExtended; 
@required
-(AVTAvatarColorVariationStore *)colorVariationStore;
-(NSArray *)primaryItems;
-(NSArray *)extendedItems;
-(BOOL)alwaysShowExtended;

@end

