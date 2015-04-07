/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UIImageView, UILabel, UISnapshotView, UITabBar, UITabBarItem, UITabBarItemProxy;

@interface UITabBarCustomizeView : UIView {
    NSArray *_availableItems;
    UISnapshotView *_dragImage;
    UITabBarItem *_draggingItem;
    UITabBarItemProxy *_draggingProxy;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _firstItemRect;
    NSMutableArray *_fixedItems;
    float _gridOffset;
    int _itemsInRowCount;
    NSMutableArray *_proxies;
    UITabBarItem *_replaceItem;
    UIImageView *_replacementGlow;
    UITabBarItem *_selectedBeforeItem;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
    UITabBar *_tabBar;
    UILabel *_titleLabel;
}

@property(retain) NSArray * availableItems;

- (int)_barMetrics;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (id)availableItems;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setAvailableItems:(id)arg1;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tintTabBarItemsForEdit:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateProxiesSelection;

@end
