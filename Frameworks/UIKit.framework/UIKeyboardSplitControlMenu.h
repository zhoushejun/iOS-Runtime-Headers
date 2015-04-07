/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishSplitTransitionBlock;

    NSMutableArray *m_menuOptions;
    struct CGSize { 
        float width; 
        float height; 
    } m_preferredSize;
}

@property(copy) id finishSplitTransitionBlock;

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)dealloc;
- (int)defaultSelectedIndex;
- (void)didFinishSplitTransition;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)finishSplitTransitionBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)numberOfItems;
- (struct CGSize { float x1; float x2; })preferredSize;
- (void)setFinishSplitTransitionBlock:(id)arg1;
- (void)setSplitAndUndocked:(BOOL)arg1;
- (id)titleForItemAtIndex:(int)arg1;

@end
