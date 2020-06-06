/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_KSTIUserDictionaryEntry.h>

@class NSString, NSDate;

@interface _KSTIUserDictionaryEntryValue : NSObject <NSSecureCoding, _KSTIUserDictionaryEntry> {

	NSString* _phrase;
	NSString* _shortcut;
	NSDate* _timestamp;

}

@property (nonatomic,copy) NSString * phrase;                       //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                     //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)valueWithEntry:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(BOOL)matchesEntry:(id)arg1 ;
-(id)shortcutForSorting;
@end
