/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxPlugDescriptor : NSObject {

	FxPlugDescriptorPriv* _priv;

}
+(id)fxPlugDescriptorWithPROPlugIn:(void*)arg1 ;
+(id)fxPlugDescriptorWithFxMetaPlug:(id)arg1 ;
-(void)dealloc;
-(id)version;
-(id)uuid;
-(id)displayName;
-(id)properties;
-(id)flavor;
-(Class)plugInClass;
-(id)initWithPROPlugIn:(void*)arg1 ;
-(id)initWithFxMetaPlug:(id)arg1 ;
-(id)plugInTypeUUID;
-(id)metaPlug;
-(id)groupDescriptor;
-(BOOL)canDoGPU;
-(BOOL)requiresCoreImage;
@end
