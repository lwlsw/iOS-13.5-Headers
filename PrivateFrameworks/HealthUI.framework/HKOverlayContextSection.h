/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKDisplayTypeContextItemSection.h>

@class NSString, NSArray;

@interface HKOverlayContextSection : NSObject <HKDisplayTypeContextItemSection> {

	NSString* title;
	NSArray* items;
	NSString* _localizedSectionTitle;
	NSArray* _overlayContextItems;

}

@property (nonatomic,readonly) NSString * localizedSectionTitle;              //@synthesize localizedSectionTitle=_localizedSectionTitle - In the implementation block
@property (nonatomic,readonly) NSArray * overlayContextItems;                 //@synthesize overlayContextItems=_overlayContextItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSArray * items; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)overlayContextItems;
-(NSString *)localizedSectionTitle;
-(id)initWithSectionTitle:(id)arg1 overlayContextItems:(id)arg2 ;
@end

