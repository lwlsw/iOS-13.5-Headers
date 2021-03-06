/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface AKSparseMutableControllerArray : NSMutableArray {

	NSMutableArray* _backendArray;

}
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)_backFillUntilCount:(unsigned long long)arg1 ;
-(BOOL)containsAnyObjects:(id)arg1 ;
@end

