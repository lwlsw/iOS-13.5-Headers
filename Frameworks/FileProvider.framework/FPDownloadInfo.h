/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FPDownloadInfo : FPActionOperationInfo <NSSecureCoding> {

	BOOL _recursively;

}

@property (assign,nonatomic) BOOL recursively;              //@synthesize recursively=_recursively - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)recursively;
-(void)setRecursively:(BOOL)arg1 ;
@end

