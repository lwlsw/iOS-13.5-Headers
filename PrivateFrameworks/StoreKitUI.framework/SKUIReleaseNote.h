/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface SKUIReleaseNote : NSObject {

	NSString* _changeNotes;
	NSDate* _date;
	NSString* _versionString;

}

@property (nonatomic,readonly) NSString * changeNotes;                //@synthesize changeNotes=_changeNotes - In the implementation block
@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * versionString;              //@synthesize versionString=_versionString - In the implementation block
+(id)dateFormatter;
-(NSDate *)date;
-(NSString *)versionString;
-(NSString *)changeNotes;
-(id)initWithReleaseNoteDictionary:(id)arg1 dateFormatter:(id)arg2 ;
@end

