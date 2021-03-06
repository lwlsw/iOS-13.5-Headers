/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@class NSAttributedString;

@interface _HKClinicalBulletedListLayoutManager : NSLayoutManager {

	CGSize _bulletSize;
	NSAttributedString* _bullet;

}

@property (nonatomic,copy) NSAttributedString * bullet;              //@synthesize bullet=_bullet - In the implementation block
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)setBullet:(NSAttributedString *)arg1 ;
-(NSAttributedString *)bullet;
@end

