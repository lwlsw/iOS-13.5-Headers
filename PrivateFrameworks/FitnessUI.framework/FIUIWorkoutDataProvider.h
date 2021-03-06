/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, _HKAnchoredObjectQueryManager, NSMutableDictionary, NSMutableArray, HKAnchoredObjectQuery, NSCalendar, NSDate;

@interface FIUIWorkoutDataProvider : NSObject {

	HKHealthStore* _healthStore;
	_HKAnchoredObjectQueryManager* _queryManager;
	NSMutableDictionary* _workoutsByDay;
	NSMutableArray* _updateHandlers;
	HKAnchoredObjectQuery* _currentWorkoutAnchoredObjectQuery;
	NSCalendar* _gregorianCalendar;
	NSCalendar* _currentCalendar;
	NSDate* _retryDate;

}
-(id)init;
-(void)dealloc;
-(void)_commonInit;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)stopFetching;
-(void)_fetchAllWorkoutsFromDate:(id)arg1 ;
-(void)_retryQueryOnDidBecomeActiveWithDate:(id)arg1 ;
-(void)_handleAddedSamples:(id)arg1 ;
-(void)_runUpdateHandlers;
-(void)_handleRemovedObjects:(id)arg1 ;
-(void)_retryQuery:(id)arg1 ;
-(BOOL)hasWorkouts;
-(id)workoutsForDay:(id)arg1 ;
-(id)allWorkouts;
-(void)startFetchingFromDate:(id)arg1 ;
-(void)addUpdateHandler:(/*^block*/id)arg1 ;
@end

