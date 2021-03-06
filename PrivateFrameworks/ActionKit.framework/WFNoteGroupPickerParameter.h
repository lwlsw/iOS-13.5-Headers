/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:45 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class NSString;

@interface WFNoteGroupPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {

	NSString* _appBundleIdentifier;

}

@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDefinition:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(Class)singleStateClass;
-(void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
@end

