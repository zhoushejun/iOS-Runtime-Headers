/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MKViewWithHairline, NSString, UISegmentedControl, UIVisualEffectView;

@interface MKSegmentedControlTabBarView : UIView <MKStackingViewControllerSelectorView> {
    UIVisualEffectView *_blurView;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didChangeSelectedSegmentIndex;

    BOOL _isBlurred;
    UISegmentedControl *_segmentedControl;
    MKViewWithHairline *_separator;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id didChangeSelectedSegmentIndex;
@property(readonly) unsigned int hash;
@property BOOL isBlurred;
@property(readonly) UISegmentedControl * segmentedControl;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_segmentSelectionDidChange;
- (void)dealloc;
- (id)didChangeSelectedSegmentIndex;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBlurred;
- (void)layoutSubviews;
- (id)segmentedControl;
- (void)setContentFromViewController:(id)arg1;
- (void)setDidChangeSelectedSegmentIndex:(id)arg1;
- (void)setIsBlurred:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateSelectorView:(id)arg1;

@end
