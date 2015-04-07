/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableSet, NSSet, UIGestureRecognizer;

@interface MFComposeScrollView : UIScrollView {
    NSMutableSet *_disabledSubviews;
    int _scrollBlocked;
    BOOL _shouldScrollToFirstResponder;
    UIGestureRecognizer *_singleTapGestureRecognizer;
    BOOL _subviewsDisabled;
    struct CGPoint { 
        float x; 
        float y; 
    } _tapLocation;
}

@property(readonly) NSSet * disabledSubviews;
@property BOOL shouldScrollToFirstResponder;
@property BOOL subviewsDisabled;

- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)beginBlockingScroll;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (void)disableSubview:(id)arg1;
- (id)disabledSubviews;
- (void)enableSubview:(id)arg1;
- (void)endBlockingScroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setShouldScrollToFirstResponder:(BOOL)arg1;
- (void)setSubviewsDisabled:(BOOL)arg1;
- (BOOL)shouldScrollToFirstResponder;
- (BOOL)subviewsDisabled;
- (void)willRemoveSubview:(id)arg1;

@end
