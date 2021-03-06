/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {

	OCPZipPackage* mZipPackage;
	const void* mDataBytes;

}

@property (nonatomic,retain) OCPZipPackage * zipPackage; 
-(BOOL)start;
-(id)read;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(BOOL)isBinaryReader;
-(OCPZipPackage *)zipPackage;
-(void)setZipPackage:(OCPZipPackage *)arg1 ;
-(BOOL)verifyFileFormat;
-(void)restartReaderToUseDecryptedDocument;
@end

