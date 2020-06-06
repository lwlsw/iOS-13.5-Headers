/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSURL, WKWebView, NSString;

@interface HRWebViewController : UIViewController <WKNavigationDelegate> {

	NSURL* _fileURL;
	WKWebView* _webView;
	UIEdgeInsets _bodyInsets;

}

@property (nonatomic,retain) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bodyInsets;               //@synthesize bodyInsets=_bodyInsets - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(WKWebView *)webView;
-(void)viewDidLoad;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(id)initWithURL:(id)arg1 bodyInsets:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)bodyInsets;
-(void)_adjustWebView:(id)arg1 bodyInsets:(UIEdgeInsets)arg2 ;
-(void)setBodyInsets:(UIEdgeInsets)arg1 ;
@end
