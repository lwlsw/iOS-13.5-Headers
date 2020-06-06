/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTable, OADTableRow;

@interface PMTableRowMapper : CMMapper {

	OADTable* mTable;
	OADTableRow* mRow;
	unsigned long long mRowIndex;

}
-(float)height;
-(unsigned long long)cellCount;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3 ;
@end
