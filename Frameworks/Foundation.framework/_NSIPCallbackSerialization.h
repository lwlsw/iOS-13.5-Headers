/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface _NSIPCallbackSerialization : NSObject {

	/*^block*/id _endBlock;
	AB _hasBegun;
	AB _hasEnded;
	NSUUID* _UUID;

}

@property (nonatomic,copy) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(id)init;
-(void)dealloc;
-(NSUUID *)UUID;
-(void)sendBeginBlock:(/*^block*/id)arg1 ;
-(void)sendEndBlock:(/*^block*/id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
@end

