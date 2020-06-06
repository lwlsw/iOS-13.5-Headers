/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface SNTestSuite : NSObject {

	NSMutableDictionary* _testCases;
	NSMutableArray* _subTestSuites;
	SNTestSuite* _parentTestSuite;

}

@property (nonatomic,readonly) NSMutableDictionary * testCases;                 //@synthesize testCases=_testCases - In the implementation block
@property (nonatomic,readonly) NSMutableArray * subTestSuites;                  //@synthesize subTestSuites=_subTestSuites - In the implementation block
@property (assign,nonatomic,__weak) SNTestSuite * parentTestSuite;              //@synthesize parentTestSuite=_parentTestSuite - In the implementation block
-(id)init;
-(void)addTestCase:(id)arg1 ;
-(void)addSubTestSuite:(id)arg1 ;
-(id)testRunForTestName:(id)arg1 ;
-(NSMutableDictionary *)testCases;
-(void)setParentTestSuite:(SNTestSuite *)arg1 ;
-(NSMutableArray *)subTestSuites;
-(SNTestSuite *)parentTestSuite;
-(id)testSetupList;
@end
