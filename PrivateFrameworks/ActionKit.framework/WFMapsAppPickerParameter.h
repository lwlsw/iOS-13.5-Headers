/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:40 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/ICAppInstallStatusObserver.h>

@class NSArray, NSOrderedSet;

@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver> {

	NSArray* _possibleStates;
	NSOrderedSet* _supportedAppIdentifiers;

}

@property (nonatomic,readonly) NSOrderedSet * supportedAppIdentifiers;              //@synthesize supportedAppIdentifiers=_supportedAppIdentifiers - In the implementation block
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(id)possibleStates;
-(id)possibleStatesForLocalization;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(NSOrderedSet *)supportedAppIdentifiers;
-(void)refreshInstalledApps;
-(void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2 ;
-(void)removeObservers;
-(void)addObservers;
@end

