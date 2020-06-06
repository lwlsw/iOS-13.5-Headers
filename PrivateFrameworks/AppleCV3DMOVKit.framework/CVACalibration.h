/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CVAIMUCalibration;

@interface CVACalibration : NSObject <NSSecureCoding> {

	NSArray* _cameraCalibrations;
	CVAIMUCalibration* _imuCalibration;

}

@property (nonatomic,retain) NSArray * cameraCalibrations;                    //@synthesize cameraCalibrations=_cameraCalibrations - In the implementation block
@property (nonatomic,retain) CVAIMUCalibration * imuCalibration;              //@synthesize imuCalibration=_imuCalibration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCameraCalibrations:(NSArray *)arg1 ;
-(void)setImuCalibration:(CVAIMUCalibration *)arg1 ;
-(NSArray *)cameraCalibrations;
-(CVAIMUCalibration *)imuCalibration;
@end
