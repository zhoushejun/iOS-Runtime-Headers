/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class <STWeightPickerDelegate>, NSString;

@interface STWeightPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {
    float _actualWeight;
    int _selectedWeightUnit;
    id _weightPickerDelegate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) int selectedWeightUnit;
@property(readonly) Class superclass;
@property(readonly) float weightInKg;
@property float weightInLbs;
@property <STWeightPickerDelegate> * weightPickerDelegate;

+ (float)kgForLbs:(float)arg1;
+ (float)lbsForKg:(float)arg1;
+ (id)weightFormatter;

- (float)_weightForRow:(int)arg1;
- (float)_weightFractionForRow:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerImageNamePrefix;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (void)saveCurrentWeight;
- (int)selectedWeightUnit;
- (void)setWeightInLbs:(float)arg1;
- (void)setWeightInLbs:(float)arg1 animated:(BOOL)arg2;
- (void)setWeightPickerDelegate:(id)arg1;
- (float)weightInKg;
- (float)weightInLbs;
- (id)weightPickerDelegate;

@end
