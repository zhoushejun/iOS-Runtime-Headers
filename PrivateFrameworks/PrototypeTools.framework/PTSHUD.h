/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSArray, NSDictionary, NSString, UIView, _UISettings, _UISettingsGroup;

@interface PTSHUD : UIView <UIGestureRecognizerDelegate, _UISettingsGroupObserver, _UISettingsKeyPathObserver> {
    NSDictionary *_configuration;
    BOOL _enteringModalEditingSavedModeTableViewCell;
    BOOL _exitingModalEditingSavedModeTableViewCell;
    struct CGPoint { 
        float x; 
        float y; 
    } _initialPoint;
    NSString *_mode;
    UIView *_panView;
    NSArray *_savedModeRows;
    unsigned int _savedSettingsIndex;
    _UISettings *_settings;
    _UISettingsGroup *_settingsGroup;
    BOOL _showing;
}

@property(copy) NSDictionary * configuration;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL enteringModalEditingSavedModeTableViewCell;
@property BOOL exitingModalEditingSavedModeTableViewCell;
@property(readonly) unsigned int hash;
@property struct CGPoint { float x1; float x2; } initialPoint;
@property(copy) NSString * mode;
@property(retain) UIView * panView;
@property(retain) NSArray * savedModeRows;
@property unsigned int savedSettingsIndex;
@property(retain) _UISettings * settings;
@property(retain) _UISettingsGroup * settingsGroup;
@property BOOL showing;
@property(readonly) Class superclass;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;
+ (id)sharedInstance;
+ (id)window;

- (void).cxx_destruct;
- (void)addSavedSettings;
- (void)addSettingsAction:(id)arg1;
- (id)configuration;
- (void)configureForSettings:(id)arg1;
- (void)configureForSettings:(id)arg1 settingsGroup:(id)arg2;
- (void)editSavedModeTableAction:(id)arg1;
- (BOOL)enteringModalEditingSavedModeTableViewCell;
- (BOOL)exitingModalEditingSavedModeTableViewCell;
- (void)handleVerticalPanGesture:(id)arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })initialPoint;
- (id)mode;
- (void)moveSavedSettingsAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)panView;
- (void)removeSavedSettingsAtIndex:(unsigned int)arg1;
- (void)restoreDefaultValuesAction:(id)arg1;
- (void)saveSettingsAction:(id)arg1;
- (void)saveSettingsGroupWithReason:(id)arg1;
- (id)savedModeRows;
- (unsigned int)savedSettingsIndex;
- (void)setConfiguration:(id)arg1;
- (void)setEnteringModalEditingSavedModeTableViewCell:(BOOL)arg1;
- (void)setExitingModalEditingSavedModeTableViewCell:(BOOL)arg1;
- (void)setInitialPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setModalEditingSavedModeTableViewCell:(BOOL)arg1;
- (void)setMode:(id)arg1;
- (void)setPanView:(id)arg1;
- (void)setSavedModeRows:(id)arg1;
- (void)setSavedSettingsIndex:(unsigned int)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettingsGroup:(id)arg1;
- (void)setShowing:(BOOL)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)settingsGroup;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned int)arg3;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned int)arg3;
- (void)show;
- (void)showControlsModeAction:(id)arg1;
- (void)showInMode:(id)arg1;
- (void)showInModeForKeyPath:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)showSavedModeAction:(id)arg1;
- (void)showSavedSettingsAtIndex:(unsigned int)arg1;
- (BOOL)showing;
- (void)updateControlsModeInterface;
- (void)updateInterface;
- (void)updateSavedModeInterface;

@end
