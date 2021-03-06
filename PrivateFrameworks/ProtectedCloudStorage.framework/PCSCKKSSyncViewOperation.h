/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext, CKKSControl, NSString;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;
	CKKSControl* _CKKSControl;
	NSString* _view;

}

@property (readonly) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
@property (retain) CKKSControl * CKKSControl;                         //@synthesize CKKSControl=_CKKSControl - In the implementation block
@property (retain) NSString * view;                                   //@synthesize view=_view - In the implementation block
-(void)start;
-(PCSCKKSItemModifyContext *)context;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(id)initWithItemModifyContext:(id)arg1 ;
-(void)checkTLKStatus;
-(void)setCKKSControl:(CKKSControl *)arg1 ;
-(CKKSControl *)CKKSControl;
-(BOOL)ensureControl;
-(void)syncView;
@end

