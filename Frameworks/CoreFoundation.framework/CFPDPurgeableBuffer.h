/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDPurgeableBuffer : CFPDDataBuffer {

	CFDataRef handle;
	unsigned long long allocSize;
	BOOL safe;
	BOOL usedMalloc;

}
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(BOOL)purgable;
-(void)endAccessing;
-(BOOL)beginAccessing;
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 ;
-(id)initWithPropertyList:(void*)arg1 ;
@end
