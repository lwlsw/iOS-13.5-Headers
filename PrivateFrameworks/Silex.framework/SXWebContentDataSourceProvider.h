/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentDataSourceProviding.h>

@protocol SXDOMObjectProviding, SXResourceDataSource;
@class NSString;

@interface SXWebContentDataSourceProvider : NSObject <SXWebContentDataSourceProviding> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXResourceDataSource> _resourceDataSource;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;               //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXResourceDataSource>)resourceDataSource;
-(id)dataSourcesForReferences:(id)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 resourceDataSource:(id)arg2 ;
@end
