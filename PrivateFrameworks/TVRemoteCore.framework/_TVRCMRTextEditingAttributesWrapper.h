/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSString;

@interface _TVRCMRTextEditingAttributesWrapper : NSObject {

	void* _attributes;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * prompt; 
@property (nonatomic,readonly) MRTextInputTraits traits; 
-(NSString *)title;
-(MRTextInputTraits)traits;
-(NSString *)prompt;
-(id)initWithAttributes:(void*)arg1 ;
@end

