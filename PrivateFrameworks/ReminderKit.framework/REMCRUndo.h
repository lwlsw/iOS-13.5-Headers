/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ReminderKit/ReminderKit-Structs.h>
@class NSArray;

@interface REMCRUndo : NSObject {

	NSArray* _undoBlocks;

}

@property (nonatomic,readonly) NSArray * undoBlocks;              //@synthesize undoBlocks=_undoBlocks - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)undoBlocks;
-(id)initWithUndoBlocks:(id)arg1 ;
@end

