/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAttachment : EKPersistentObject
+(id)relations;
+(Class)meltedClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fileSize;
-(void)setURL:(id)arg1 ;
-(id)UUID;
-(void)setUUID:(id)arg1 ;
-(id)URL;
-(void)setFileSize:(id)arg1 ;
-(id)fileName;
-(void)setFileName:(id)arg1 ;
-(int)entityType;
-(id)fileFormat;
-(id)URLForPendingFileCopy;
-(void)setFileFormat:(id)arg1 ;
-(id)semanticIdentifier;
-(BOOL)isBinary;
-(void)setIsBinary:(BOOL)arg1 ;
-(id)localRelativePath;
-(void)setLocalRelativePath:(id)arg1 ;
-(id)XPropertiesData;
-(void)setXPropertiesData:(id)arg1 ;
-(id)externalId;
-(void)setExternalId:(id)arg1 ;
-(void)setURLForPendingFileCopy:(id)arg1 ;
@end
