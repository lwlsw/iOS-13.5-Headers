/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString;

@interface WKAccessibilityImageRegion : NSObject {

	NSString* _label;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
@end

