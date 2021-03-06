/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@class CPParagraphListItem;

@interface CPParagraph : CPRegion {

	BOOL noIndentation;
	BOOL below;
	unsigned long long alignment;
	BOOL hasDropCap;
	id flowProperties;
	CPParagraphListItem* listItem;
	double preformatWidth;

}

@property (nonatomic,retain) CPParagraphListItem * listItem; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(BOOL)isTextRegion;
-(void)accept:(id)arg1 ;
-(CPParagraphListItem *)listItem;
-(void)setListItem:(CPParagraphListItem *)arg1 ;
-(double)selectionBottom;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(id)flowProperties;
-(void)setFlowProperties:(id)arg1 ;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(void)setNoIndentation:(BOOL)arg1 ;
-(BOOL)noIndentation;
-(BOOL)hasDropCap;
-(void)setHasDropCap:(BOOL)arg1 ;
-(void)explode;
-(CGRect)reducedBounds;
-(void)setBelow:(BOOL)arg1 ;
-(BOOL)below;
-(BOOL)isPreformattedWithUnitWidth:(double*)arg1 ;
@end

