/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSAttributedString;

@interface _MKMultiPartStringComponent : NSObject {

	NSAttributedString* _attributedString;
	NSRange _originalRange;
	NSRange _range;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) NSRange originalRange;                                   //@synthesize originalRange=_originalRange - In the implementation block
@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
-(id)description;
-(NSRange)range;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(void)setRange:(NSRange)arg1 ;
-(NSRange)originalRange;
@end

