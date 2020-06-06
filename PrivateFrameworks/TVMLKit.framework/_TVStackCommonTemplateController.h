/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>
#import <TVMLKit/TVObserving.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <TVMLKit/TVMediaProviding.h>

@protocol TVMediaPlaying;
@class TVMediaInfo, UIView, _TVFocusCaptureView, IKViewElement, _TVStackCollectionView, TVObservableEventController, IKAudioElement, IKImageElement, IKMediaContentElement, UIImage, NSArray, UIViewController, _TVStackWrappingView, NSString;

@interface _TVStackCommonTemplateController : _TVBgImageLoadingViewController <UIGestureRecognizerDelegate, TVAppTemplateImpressionable, TVObserving, _TVCollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVMediaProviding> {

	UIView* _overlayView;
	_TVFocusCaptureView* _disabledTemplateFocusCaptureView;
	double _impressionThreshold;
	IKViewElement* _viewElement;
	_TVStackCollectionView* _collectionView;
	IKViewElement* _collectionListElement;
	TVObservableEventController* _observableEventController;
	IKAudioElement* _audioElement;
	IKViewElement* _backgroundElement;
	IKImageElement* _heroImgElement;
	IKImageElement* _bgImgElement;
	IKImageElement* _uberImgElement;
	IKMediaContentElement* _bgMediaContentElement;
	UIImage* _bgImage;
	id<TVMediaPlaying> _mediaPlayer;
	TVMediaInfo* _selectedMediaInfo;
	NSArray* _supplementaryViewControllers;
	UIViewController* _focusedSupplementaryViewController;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                            //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKAudioElement * audioElement;                                          //@synthesize audioElement=_audioElement - In the implementation block
@property (nonatomic,retain) IKViewElement * collectionListElement;                                  //@synthesize collectionListElement=_collectionListElement - In the implementation block
@property (nonatomic,retain) IKViewElement * backgroundElement;                                      //@synthesize backgroundElement=_backgroundElement - In the implementation block
@property (nonatomic,retain) IKImageElement * heroImgElement;                                        //@synthesize heroImgElement=_heroImgElement - In the implementation block
@property (nonatomic,retain) IKImageElement * bgImgElement;                                          //@synthesize bgImgElement=_bgImgElement - In the implementation block
@property (nonatomic,retain) IKImageElement * uberImgElement;                                        //@synthesize uberImgElement=_uberImgElement - In the implementation block
@property (nonatomic,retain) IKMediaContentElement * bgMediaContentElement;                          //@synthesize bgMediaContentElement=_bgMediaContentElement - In the implementation block
@property (nonatomic,retain) UIImage * bgImage;                                                      //@synthesize bgImage=_bgImage - In the implementation block
@property (assign,nonatomic,__weak) id<TVMediaPlaying> mediaPlayer;                                  //@synthesize mediaPlayer=_mediaPlayer - In the implementation block
@property (nonatomic,retain) TVMediaInfo * selectedMediaInfo;                                        //@synthesize selectedMediaInfo=_selectedMediaInfo - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryViewControllers;                                   //@synthesize supplementaryViewControllers=_supplementaryViewControllers - In the implementation block
@property (nonatomic,retain) UIViewController * focusedSupplementaryViewController;                  //@synthesize focusedSupplementaryViewController=_focusedSupplementaryViewController - In the implementation block
@property (nonatomic,retain,readonly) _TVStackWrappingView * stackWrappingView; 
@property (nonatomic,retain) _TVStackCollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) TVObservableEventController * observableEventController;              //@synthesize observableEventController=_observableEventController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)scrollViewDidScroll:(id)arg1 ;
-(_TVStackCollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(void)setCollectionView:(_TVStackCollectionView *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewSafeAreaInsetsDidChange;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(id)_overlayView;
-(id)_flowLayout;
-(void)scrollToTop;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id<TVMediaPlaying>)mediaPlayer;
-(void)setMediaPlayer:(id<TVMediaPlaying>)arg1 ;
-(void)_updateViewLayout;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_cancelImpressionsUpdate;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(void)setBgImage:(UIImage *)arg1 ;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEvent:(id)arg2 ;
-(TVMediaInfo *)selectedMediaInfo;
-(BOOL)_updateSupplementaryViewControllersWithElements:(id)arg1 updateStyles:(BOOL)arg2 ;
-(void)_disableScrollingIfNecessary:(id)arg1 ;
-(void)_updateBackgroundViews;
-(void)_updateViewOverlay;
-(void)_updateViewSupplementaryViews;
-(long long)_supplementaryViewSectionIndex;
-(_TVStackWrappingView *)stackWrappingView;
-(id)_modalPresenterPresentedViewController;
-(void)updateBackgroundAndBackdrop;
-(id)_preferredFocusedSupplementaryView;
-(UIViewController *)focusedSupplementaryViewController;
-(NSArray *)supplementaryViewControllers;
-(void)setFocusedSupplementaryViewController:(UIViewController *)arg1 ;
-(void)_mediaPlayerStateDidChange;
-(void)_mediaPlayerCoverImageDidChange;
-(TVObservableEventController *)observableEventController;
-(void)updateBackgroundAndBackdropMaskFactor;
-(void)_dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(IKMediaContentElement *)bgMediaContentElement;
-(id)viewControllerWithElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3 ;
-(void)setSupplementaryViewControllers:(NSArray *)arg1 ;
-(void)didUpdateSupplementarySectionInfo;
-(id)parsedMediaInfo;
-(void)setSelectedMediaInfo:(TVMediaInfo *)arg1 ;
-(UIImage *)bgImage;
-(IKViewElement *)collectionListElement;
-(void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3 ;
-(BOOL)_isBackdropNeeded;
-(BOOL)_shouldLoadBackgroundImageAsynchronously;
-(void)setCollectionListElement:(IKViewElement *)arg1 ;
-(IKAudioElement *)audioElement;
-(void)setAudioElement:(IKAudioElement *)arg1 ;
-(IKViewElement *)backgroundElement;
-(void)setBackgroundElement:(IKViewElement *)arg1 ;
-(IKImageElement *)heroImgElement;
-(void)setHeroImgElement:(IKImageElement *)arg1 ;
-(IKImageElement *)bgImgElement;
-(void)setBgImgElement:(IKImageElement *)arg1 ;
-(IKImageElement *)uberImgElement;
-(void)setUberImgElement:(IKImageElement *)arg1 ;
-(void)setBgMediaContentElement:(IKMediaContentElement *)arg1 ;
@end
