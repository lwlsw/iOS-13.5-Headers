/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSFileHandle, NSNumber;

@interface CKFileOpenResult : NSObject <NSSecureCoding> {

	mkbbackuprefRef _handle;
	NSFileHandle* _fileHandle;
	NSFileHandle* _encryptedFileHandle;
	NSNumber* _fileSize;

}

@property (assign,nonatomic) mkbbackuprefRef handle;                          //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;                       //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * encryptedFileHandle;              //@synthesize encryptedFileHandle=_encryptedFileHandle - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(mkbbackuprefRef)handle;
-(NSNumber *)fileSize;
-(NSFileHandle *)fileHandle;
-(void)setHandle:(mkbbackuprefRef)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(id)initWithMobileKeyBagHandle:(mkbbackuprefRef)arg1 path:(id)arg2 error:(id*)arg3 ;
-(NSFileHandle *)encryptedFileHandle;
-(void)setEncryptedFileHandle:(NSFileHandle *)arg1 ;
@end

