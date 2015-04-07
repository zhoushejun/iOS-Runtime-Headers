/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSString, _UISettings;

@interface PTSInfoLabel : UILabel <PTSHUDControl, _UISettingsKeyPathObserver> {
    int _alignment;
    _UISettings *_settings;
    NSString *_valueKeyPath;
}

@property int alignment;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL enabled;
@property(readonly) unsigned int hash;
@property _UISettings * settings;
@property(readonly) Class superclass;
@property(copy) NSString * valueKeyPath;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;
+ (id)infoLabel;
+ (id)infoLabelForSettings:(id)arg1 valueKeyPath:(id)arg2;

- (void).cxx_destruct;
- (int)alignment;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setAlignment:(int)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setValueKeyPath:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)valueKeyPath;

@end
