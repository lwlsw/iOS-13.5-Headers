/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@protocol SiriUICarDNDContextProviderDelegate;
@class SADeviceCarDNDHintContext;

@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider> {

	id<SiriUICarDNDContextProviderDelegate> _delegate;
	SADeviceCarDNDHintContext* _hintContext;

}

@property (assign,nonatomic,__weak) id<SiriUICarDNDContextProviderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setHintContext:,nonatomic,copy) SADeviceCarDNDHintContext * hintContext;              //@synthesize hintContext=_hintContext - In the implementation block
-(id<SiriUICarDNDContextProviderDelegate>)delegate;
-(void)setDelegate:(id<SiriUICarDNDContextProviderDelegate>)arg1 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(SADeviceCarDNDHintContext *)hintContext;
-(void)_setHintContext:(id)arg1 ;
@end

