/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken, NSArray;

@interface REScriptASTFunctionCallNode : REScriptASTNode {

	REScriptToken* _functionIdentifier;
	NSArray* _arguments;

}

@property (nonatomic,readonly) REScriptToken * functionIdentifier;              //@synthesize functionIdentifier=_functionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * arguments;                             //@synthesize arguments=_arguments - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(NSArray *)arguments;
-(id)dependencies;
-(REScriptToken *)functionIdentifier;
-(id)initWithFunctionName:(id)arg1 arguments:(id)arg2 ;
@end
