/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:42 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ENXMLWriter.h>

@interface ENMLWriter : ENXMLWriter
+(BOOL)validateURLComponents:(id)arg1 ;
+(id)emptyNote;
-(id)init;
-(BOOL)startElement:(id)arg1 attributes:(id)arg2 ;
-(void)startDocumentWithAttributes:(id)arg1 ;
-(void)startDocument;
-(void)endDocument;
-(id)validateURLAttribute:(id)arg1 inAttributes:(id)arg2 ;
-(void)writeResourceWithDataHash:(id)arg1 mime:(id)arg2 attributes:(id)arg3 ;
-(void)writeResource:(id)arg1 ;
-(void)writeEncryptedInfo:(id)arg1 ;
-(void)writeTodoWithCheckedState:(BOOL)arg1 ;
@end
