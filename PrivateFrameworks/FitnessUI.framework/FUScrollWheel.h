/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@class <FUScrollWheelDataSource>, <FUScrollWheelDelegate>, NSMutableArray, NSMutableDictionary, NSString, UIFont, UIImageView, UIScrollView, UIView;

@interface FUScrollWheel : UIView <UIScrollViewDelegate> {
    UIView *_bottomDividerView;
    unsigned int _currentIndex;
    <FUScrollWheelDataSource> *_dataSource;
    <FUScrollWheelDelegate> *_delegate;
    UIFont *_font;
    int _itemTitleAligmnent;
    BOOL _loaded;
    UIImageView *_maskLayer;
    unsigned int _numberOfRows;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _previousRange;
    NSMutableArray *_reusableLabelsQueue;
    UIScrollView *_scrollView;
    float _scrollWheelLabelHeight;
    float _scrollWheelLabelPageSize;
    BOOL _shouldRegenerateOpacityMask;
    BOOL _showsSelectionIndicator;
    UIView *_topDividerView;
    NSMutableDictionary *_usedLabels;
}

@property unsigned int currentIndex;
@property <FUScrollWheelDataSource> * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property <FUScrollWheelDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) UIFont * font;
@property(readonly) unsigned int hash;
@property int itemTitleAligmnent;
@property(retain) UIScrollView * scrollView;
@property float scrollWheelLabelPageSize;
@property BOOL showsSelectionIndicator;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_alertDidChangeToCurrentIndex:(unsigned int)arg1;
- (id)_dequeueLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLabelAtIndex:(unsigned int)arg1;
- (void)_generateOpacityMask;
- (void)_layoutScrollView;
- (unsigned int)_numberOfRows;
- (void)_recycleAllLabels;
- (void)_recycleLabel:(id)arg1 forKey:(id)arg2;
- (void)_reuseLabelsWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 contentOffset:(struct CGPoint { float x1; float x2; })arg2;
- (void)_setActiveScrollwheelIfNotActive;
- (float)_startingLocation;
- (id)_textForLabelAtIndex:(unsigned int)arg1;
- (id)_titleForItemAtIndex:(unsigned int)arg1;
- (float)_yPositionForLabelAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)itemTitleAligmnent;
- (void)layoutSubviews;
- (void)reloadData;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (float)scrollWheelLabelPageSize;
- (void)setCurrentIndex:(unsigned int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setItemTitleAligmnent:(int)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollWheelLabelPageSize:(float)arg1;
- (void)setShowsSelectionIndicator:(BOOL)arg1;
- (BOOL)showsSelectionIndicator;
- (void)willMoveToSuperview:(id)arg1;

@end
