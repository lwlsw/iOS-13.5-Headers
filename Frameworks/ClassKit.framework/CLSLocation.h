/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSContactsSearchable.h>

@class NSString, NSPersonNameComponents;

@interface CLSLocation : CLSObject <CLSContactsSearchable> {

	BOOL _isEditable;
	NSString* _locationName;
	NSString* _searchText;
	long long _sourceType;

}

@property (nonatomic,copy) NSString * locationName;                                  //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                    //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) long long sourceType;                                   //@synthesize sourceType=_sourceType - In the implementation block
@property (assign) BOOL isEditable;                                                  //@synthesize isEditable=_isEditable - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) NSString * groupIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)locationName;
-(NSString *)searchText;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(BOOL)isEditable;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setIsEditable:(BOOL)arg1 ;
-(void)setLocationName:(NSString *)arg1 ;
@end

