/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIViewPrintFormatter.h>

@class _WKFrameHandle;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {

	RetainPtr<_WKFrameHandle>* _frameToPrint;
	RetainPtr<CGPDFDocument *>* _printedDocument;
	BOOL _suppressPageCountRecalc;
	BOOL _snapshotFirstPage;

}

@property (nonatomic,retain) _WKFrameHandle * frameToPrint; 
@property (assign,nonatomic) BOOL snapshotFirstPage;                     //@synthesize snapshotFirstPage=_snapshotFirstPage - In the implementation block
-(id)_webView;
-(void)_setNeedsRecalc;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(_WKFrameHandle *)frameToPrint;
-(void)setFrameToPrint:(_WKFrameHandle *)arg1 ;
-(BOOL)snapshotFirstPage;
-(void)_setSnapshotPaperRect:(CGRect)arg1 ;
-(void)setSnapshotFirstPage:(BOOL)arg1 ;
@end

