/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PDFKit/PDFKit-Structs.h>
@class NSObject, NSMutableDictionary;

@interface PDFTilePoolPrivate : NSObject {

	NSObject*<OS_dispatch_queue> workQueue;
	os_unfair_lock_s surfacesLock;
	NSMutableDictionary* surfaces;
	int surfaceType;

}
@end

