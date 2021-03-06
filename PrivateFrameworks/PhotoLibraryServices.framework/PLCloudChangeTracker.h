/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLCloudChangeTracker <NSObject>
@property (copy,readonly) NSString * name; 
@property (assign,nonatomic,__weak) id<PLCloudChangeTrackerDelegate> delegate; 
@property (copy,readonly) NSString * lastKnownTokenDescription; 
@property (readonly) BOOL hasChangeTrackerToken; 
@property (copy,readonly) NSString * lastKnownDeletionTokenDescription; 
@required
-(NSString *)name;
-(id<PLCloudChangeTrackerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)disconnect;
-(BOOL)connect;
-(BOOL)isConnected;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(NSString *)lastKnownTokenDescription;
-(void)updateLastKnownTokenToResult:(id)arg1;
-(id)fetchAllEvents;
-(void)clearToken;
-(BOOL)hasChangeTrackerToken;
-(void)forceTokenToCurrent;
-(id)fetchDeletionEvents;
-(void)updateLastKnownDeletionTokenToResult:(id)arg1;
-(NSString *)lastKnownDeletionTokenDescription;

@end

