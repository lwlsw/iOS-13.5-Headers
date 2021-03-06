/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) IMHandle * sender;                 //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)sender;
-(long long)actionType;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

