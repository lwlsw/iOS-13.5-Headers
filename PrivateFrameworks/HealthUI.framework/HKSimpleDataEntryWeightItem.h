/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKSimpleDataEntryItem.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class HKSimpleDataEntryPlainTextCell, NSString, UIPickerView, NSNumber;

@interface HKSimpleDataEntryWeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource> {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	UIPickerView* _picker;
	long long _localWeightUnit;
	long long _numberOfRowsForPicker;
	NSNumber* _defaultValue;
	NSNumber* _kilogramValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginEditing;
-(id)cell;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)localeDidChange:(id)arg1 ;
-(void)_setupPlaceholder;
-(void)updateCellDisplay;
-(void)_setTextForInputTextField:(id)arg1 ;
-(id)formattedKeyAndValue;
-(void)_updateLocaleDependentValues;
-(void)_valueDidChange;
-(id)_formattedValueForDisplay;
-(double)_defaultKilogramValue;
-(void)_setWeightValueForSelectedRow:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 weightInKg:(id)arg3 defaultWeightInKg:(id)arg4 ;
@end

