/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonTabsLayoutManager>, ABPersonViewControllerHelper, NSString, UIView;

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView> {
    ABPersonViewControllerHelper *_helper;
    float _minimumBottomInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _savedContentInset;
    <ABPersonTabsLayoutManager> *_tabsLayoutManager;
}

@property(retain) UIView * backgroundView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property ABPersonViewControllerHelper * helper;
@property float minimumBottomInset;
@property(readonly) Class superclass;
@property(retain) <ABPersonTabsLayoutManager> * tabsLayoutManager;

- (id)helper;
- (void)layoutSubviews;
- (float)minimumBottomInset;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHelper:(id)arg1;
- (void)setMinimumBottomInset:(float)arg1;
- (void)setTabsLayoutManager:(id)arg1;
- (id)tabsLayoutManager;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;

@end
