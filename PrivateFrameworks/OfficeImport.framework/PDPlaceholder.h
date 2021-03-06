/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PDPlaceholder : NSObject {

	int mType;
	int mOrientation;
	int mSize;
	unsigned mIndex;
	int mBoundsTrack;

}
+(BOOL)isTextType:(int)arg1 ;
+(BOOL)isNonTextType:(int)arg1 ;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)size;
-(unsigned)index;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(int)boundsTrack;
-(void)setBoundsTrack:(int)arg1 ;
@end

