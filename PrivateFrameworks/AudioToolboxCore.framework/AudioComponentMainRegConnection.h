/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AudioComponentRegistrarProtocol.h>

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {

	AudioComponentRegistrarImpl* mImpl;
	ConnectionInfo mConnInfo;

}
-(void)getComponentList:(id)arg1 linkedSDKVersion:(int)arg2 includeExtensions:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)canRegisterComponent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithRegistrar:(AudioComponentRegistrarImpl*)arg1 connection:(id)arg2 ;
@end
