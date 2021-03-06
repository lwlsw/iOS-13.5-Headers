/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSString, NSData, NSFileWrapper;

@interface _WKAttachmentInfo : NSObject {

	RetainPtr<NSFileWrapper>* _fileWrapper;
	RetainPtr<NSString>* _mimeType;
	RetainPtr<NSString>* _utiType;
	RetainPtr<NSString>* _filePath;

}

@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSFileWrapper * fileWrapper; 
-(NSString *)name;
-(NSData *)data;
-(NSString *)contentType;
-(NSFileWrapper *)fileWrapper;
-(NSString *)filePath;
-(id)initWithFileWrapper:(id)arg1 filePath:(id)arg2 mimeType:(id)arg3 utiType:(id)arg4 ;
@end

