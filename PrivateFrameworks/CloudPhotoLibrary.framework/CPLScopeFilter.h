/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CPLScopeFilter : NSObject {

	NSSet* _includedScopeIdentifiers;
	NSSet* _excludedScopeIdentifiers;

}

@property (nonatomic,readonly) NSSet * includedScopeIdentifiers;              //@synthesize includedScopeIdentifiers=_includedScopeIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * excludedScopeIdentifiers;              //@synthesize excludedScopeIdentifiers=_excludedScopeIdentifiers - In the implementation block
-(id)description;
-(id)_setOfScopeIdentifiersFromEnumeration:(id)arg1 ;
-(id)initWithIncludedScopeIdentifiers:(id)arg1 ;
-(id)initWithExcludedScopeIdentifiers:(id)arg1 ;
-(BOOL)filterOnScopeIdentifier:(id)arg1 ;
-(NSSet *)includedScopeIdentifiers;
-(NSSet *)excludedScopeIdentifiers;
@end

