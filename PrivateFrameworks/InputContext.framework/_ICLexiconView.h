/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputContext/InputContext-Structs.h>
@class NSString;

@interface _ICLexiconView : NSObject {

	LXLexiconRef _lexicon;
	unsigned char _typeFlags;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned char typeFlags;              //@synthesize typeFlags=_typeFlags - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(BOOL)contains:(id)arg1 ;
-(LXEntryRef)copyEntryForString:(id)arg1 ;
-(id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2 ;
-(id)getSortKeyEquivalents:(id)arg1 ;
-(const LXLexiconRef)getLexiconImplementation;
-(unsigned char)typeFlags;
@end
