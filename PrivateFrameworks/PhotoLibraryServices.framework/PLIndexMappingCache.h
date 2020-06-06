/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLIndexMappingCache <NSObject>
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
@optional
-(id)currentStateForChange;

@required
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;

@end
