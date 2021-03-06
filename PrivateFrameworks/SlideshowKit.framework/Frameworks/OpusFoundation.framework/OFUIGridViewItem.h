/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OFUIWindowDraggingPasteboard.h>

@class NSString;

@interface OFUIGridViewItem : NSObject <OFUIWindowDraggingPasteboard> {

	id _object;
	BOOL _highlighted;
	BOOL _selected;

}

@property (nonatomic,retain) id object;                                          //@synthesize object=_object - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectForPasteboadItem:(id)arg1 ;
+(id)itemWithPasteboardItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
-(BOOL)isSelected;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)pasteboardItem;
@end

