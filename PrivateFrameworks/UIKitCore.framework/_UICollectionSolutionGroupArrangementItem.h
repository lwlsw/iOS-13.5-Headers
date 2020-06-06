/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UICollectionLayoutItemSolver, NSCollectionLayoutItem;

@interface _UICollectionSolutionGroupArrangementItem : NSObject {

	_UICollectionLayoutItemSolver* _solution;
	CGRect _layoutFrame;

}

@property (assign,nonatomic) CGRect layoutFrame;                                      //@synthesize layoutFrame=_layoutFrame - In the implementation block
@property (nonatomic,readonly) _UICollectionLayoutItemSolver * solution;              //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
-(NSCollectionLayoutItem *)item;
-(_UICollectionLayoutItemSolver *)solution;
-(CGRect)layoutFrame;
-(id)initWithSolution:(id)arg1 ;
-(void)setLayoutFrame:(CGRect)arg1 ;
@end
