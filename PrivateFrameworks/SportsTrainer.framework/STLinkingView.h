/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class <STLinkingViewDelegate>, NSString, UIButton, UILabel, UIView;

@interface STLinkingView : UIView {
    BOOL _animateLayout;
    BOOL _animating;
    BOOL _bordered;
    UIButton *_cancelButton;
    <STLinkingViewDelegate> *_delegate;
    UIButton *_doneButton;
    UILabel *_fgsnLabel;
    NSString *_fgsnSerialNumber;
    UILabel *_instructionLabel;
    UIButton *_linkNewButton;
    int _linkingType;
    UIView *_pulseView;
    UIButton *_rescanButton;
    UIButton *_unlinkButton;
}

@property BOOL bordered;
@property <STLinkingViewDelegate> * delegate;
@property int linkingType;
@property(copy) NSString * serialNumber;

- (void)_done;
- (id)_haloImageOfSize:(struct CGSize { float x1; float x2; })arg1 color:(id)arg2 strokeWidth:(float)arg3;
- (void)_linkNewEmped;
- (void)_linkNewRemote;
- (id)_newButton;
- (void)_receiverHideAnimationDidStop;
- (void)_rescanForEmped;
- (void)_rescanForRemote;
- (void)_sensorHideAnimationDidStop;
- (id)_sensorImageName;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_unlinkRemote;
- (BOOL)bordered;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)linkingType;
- (id)serialNumber;
- (void)setBordered:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkingType:(int)arg1;
- (void)setLinkingType:(int)arg1 animated:(BOOL)arg2;
- (void)setSerialNumber:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
