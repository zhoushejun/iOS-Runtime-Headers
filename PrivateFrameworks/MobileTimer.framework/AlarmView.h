/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class DigitalClockLabel, NSString, UIFont, UILabel, UISwitch, UIView;

@interface AlarmView : UIView <MTDateLabelObserver> {
    UILabel *_detailLabel;
    UISwitch *_enabledSwitch;
    NSString *_name;
    UIFont *_nameFont;
    UILabel *_nameLabel;
    UIFont *_repeatFont;
    UILabel *_repeatLabel;
    NSString *_repeatText;
    UILabel *_secondaryDesignatorLabel;
    UIView *_singleStyleDetailContainer;
    int _style;
    DigitalClockLabel *_timeLabel;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) UILabel * detailLabel;
@property(readonly) UISwitch * enabledSwitch;
@property(readonly) unsigned int hash;
@property(copy) NSString * name;
@property(retain) UIFont * nameFont;
@property(retain,readonly) UILabel * nameLabel;
@property(retain) UIFont * repeatFont;
@property(retain,readonly) UILabel * repeatLabel;
@property(copy) NSString * repeatText;
@property(retain,readonly) UILabel * secondaryDesignatorLabel;
@property int style;
@property(readonly) Class superclass;
@property(readonly) DigitalClockLabel * timeLabel;

- (void)dateLabel:(id)arg1 timeDesignatorDidChange:(id)arg2;
- (void)dealloc;
- (id)detailLabel;
- (id)enabledSwitch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)name;
- (id)nameFont;
- (id)nameLabel;
- (id)repeatFont;
- (id)repeatLabel;
- (id)repeatText;
- (id)secondaryDesignatorLabel;
- (void)setName:(id)arg1;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)setNameFont:(id)arg1;
- (void)setRepeatFont:(id)arg1;
- (void)setRepeatText:(id)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (id)timeLabel;

@end
