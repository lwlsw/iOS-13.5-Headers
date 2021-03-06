/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIUserModelDataStoring <NSObject>
@required
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
-(BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(id)getInputModesForKey:(id)arg1;
-(id)getAllKnownInputModes;
-(BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
-(id)getDurableValueForKey:(id)arg1;

@end

