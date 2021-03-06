/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class NSString, UIImage;

@interface ICBlockUIActivity : UIActivity {

	/*^block*/id _block;
	NSString* _title;
	UIImage* _image;
	NSString* _systemImageName;
	NSString* _customActivityType;

}

@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * systemImageName;                 //@synthesize systemImageName=_systemImageName - In the implementation block
@property (nonatomic,retain) NSString * customActivityType;              //@synthesize customActivityType=_customActivityType - In the implementation block
-(id)block;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)activityType;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NSString *)systemImageName;
-(id)_systemImageName;
-(long long)activityCategory;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(void)setSystemImageName:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 activityType:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 systemImageName:(id)arg2 activityType:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)setCustomActivityType:(NSString *)arg1 ;
-(NSString *)customActivityType;
-(id)initWithTitle:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithTitle:(id)arg1 systemImageName:(id)arg2 block:(/*^block*/id)arg3 ;
@end

