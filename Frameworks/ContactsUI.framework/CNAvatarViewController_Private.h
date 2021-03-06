/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CNContactStore, PRPersonaStore;


@protocol CNAvatarViewController_Private <NSObject>
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@property (assign,nonatomic,__weak) id<CNAvatarViewControllerDelegate> delegate; 
@required
-(id<CNAvatarViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CNContactStore *)contactStore;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(PRPersonaStore *)personaStore;
-(BOOL)isThreeDTouchEnabled;

@end

