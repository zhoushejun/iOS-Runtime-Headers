/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUISearchFieldController, UIViewController;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate> {
    SKUIClientContext *_clientContext;
    UIViewController *_parentViewController;
    SKUISearchFieldController *_searchFieldController;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) UIViewController * parentViewController;
@property(readonly) SKUISearchFieldController * searchFieldController;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_existingSharedResultsViewController;
- (void)_requestSearch:(id)arg1;
- (id)_searchFieldController;
- (id)_sharedResultsViewController;
- (void)_termDidChangeNotification:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1;
- (id)newSearchFieldBarItem;
- (id)parentViewController;
- (void)reloadSearchField;
- (id)searchFieldController;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (BOOL)searchFieldControllerShouldBeginEditing:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setNumberOfSearchResults:(int)arg1;
- (void)setSearchFieldPlaceholderText:(id)arg1;
- (void)setSearchFieldText:(id)arg1;

@end
