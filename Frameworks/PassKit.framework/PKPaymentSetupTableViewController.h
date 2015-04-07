/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString, UITableView, UITableViewController, UIView;

@interface PKPaymentSetupTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_containerView;
    int _context;
    int _style;
    UITableView *_tableView;
    UITableViewController *_tableViewController;
}

@property int context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) UITableView * tableView;

- (int)context;
- (void)dealloc;
- (unsigned int)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (id)initWithStyle:(int)arg1 context:(int)arg2;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContext:(int)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
