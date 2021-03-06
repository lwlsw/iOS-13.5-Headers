/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, CoreDAVItemWithNoChildren;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {

	NSMutableSet* _hrefs;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) NSMutableSet * hrefs;                                     //@synthesize hrefs=_hrefs - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
+(id)copyParseRules;
-(id)description;
-(NSMutableSet *)hrefs;
-(id)hrefsAsOriginalURLs;
-(id)hrefsAsFullURLs;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)addHref:(id)arg1 ;
-(void)setHrefs:(NSMutableSet *)arg1 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)hrefsAsStrings;
@end

