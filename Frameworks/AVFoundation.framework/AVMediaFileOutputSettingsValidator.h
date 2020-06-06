/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVOutputSettingsValidation.h>

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {

	AVMediaFileType* _fileType;

}

@property (nonatomic,readonly) AVMediaFileType * fileType; 
+(void)initialize;
+(id)mediaFileOutputSettingsValidatorForFileType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(AVMediaFileType *)fileType;
-(id)initWithFileType:(id)arg1 ;
-(BOOL)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(BOOL)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2 ;
@end
