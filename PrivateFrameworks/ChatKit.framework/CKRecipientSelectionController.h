/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKRecipientSelectionControllerDelegate>, ABPeoplePickerNavigationController, CKComposeRecipientView, CKPendingConversation, CKRecipientSearchListController, MFComposeRecipient, NSArray, NSMutableDictionary, NSString, UIScrollView, UIView;

@interface CKRecipientSelectionController : CKViewController <ABPeoplePickerNavigationControllerDelegate, CKRecipientSearchListControllerDelegate, MFComposeRecipientTextViewDelegate, MFGroupDetailViewControllerDelegate, UINavigationControllerDelegate> {
    NSArray *_addressBookProperties;
    CKPendingConversation *_conversation;
    <CKRecipientSelectionControllerDelegate> *_delegate;
    BOOL _didShowOneTimeErrorAlert;
    BOOL _editable;
    BOOL _forceMMS;
    BOOL _homogenizePreferredServiceForiMessage;
    float _keyboardHeightWithAccessoryView;
    ABPeoplePickerNavigationController *_peoplePickerController;
    BOOL _peoplePickerHidden;
    BOOL _preventAtomization;
    MFComposeRecipient *_recentContactForPresentedABCard;
    NSMutableDictionary *_recipientAvailabilities;
    NSMutableDictionary *_recipientAvailibityTimers;
    CKRecipientSearchListController *_searchListController;
    BOOL _shouldSuppressSearchResultsTable;
    CKComposeRecipientView *_toField;
    UIView *_toFieldContainerView;
    UIScrollView *_toFieldScrollingView;
}

@property(retain) NSArray * addressBookProperties;
@property(readonly) float collapsedHeight;
@property(retain) CKPendingConversation * conversation;
@property(copy,readonly) NSString * debugDescription;
@property <CKRecipientSelectionControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property BOOL didShowOneTimeErrorAlert;
@property(getter=isEditable) BOOL editable;
@property BOOL forceMMS;
@property(readonly) unsigned int hash;
@property(readonly) BOOL homogenizePreferredServiceForiMessage;
@property(retain) ABPeoplePickerNavigationController * peoplePickerController;
@property(getter=isPeoplePickerHidden) BOOL peoplePickerHidden;
@property BOOL preventAtomization;
@property(retain) MFComposeRecipient * recentContactForPresentedABCard;
@property(retain) NSMutableDictionary * recipientAvailabilities;
@property(retain) NSMutableDictionary * recipientAvailibityTimers;
@property(retain) CKRecipientSearchListController * searchListController;
@property(getter=isSearchResultsHidden) BOOL searchResultsHidden;
@property(readonly) BOOL shouldSuppressSearchResultsTable;
@property(readonly) Class superclass;
@property(retain) CKComposeRecipientView * toField;
@property(retain) UIView * toFieldContainerView;
@property(readonly) BOOL toFieldIsFirstResponder;
@property(retain) UIScrollView * toFieldScrollingView;

- (void)_adjustToFieldPositionIfNecessary;
- (id)_alternateAddressesForRecipient:(id)arg1;
- (id)_alternateiMessagableAddressesForRecipient:(id)arg1;
- (unsigned int)_atomPresentationOptionsForRecipient:(id)arg1;
- (BOOL)_availibilityForRecipient:(id)arg1 onService:(id)arg2;
- (void)_dismissPeoplePicker;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1;
- (void)_handleRecipientAvailabilityTimeout:(id)arg1;
- (void)_handleRecipientViewChanged:(id)arg1;
- (void)_hideSearchField;
- (BOOL)_isToFieldPushedUp;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_navigationBarInsets;
- (id)_navigationControllerForSearchResults;
- (id)_recipientCausingTooManyRecipientsError;
- (void)_refreshActionSheet;
- (void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)_removeRecent;
- (void)_resetSearchResultsInsets;
- (BOOL)_shouldShowCardForPerson:(void*)arg1;
- (void)_showActionSheetForRecipient:(id)arg1 animated:(BOOL)arg2;
- (void)_showDetailsForGroup:(id)arg1;
- (void)_showDetailsForRecipient:(id)arg1 canDelete:(BOOL)arg2 presentInPopover:(BOOL)arg3;
- (void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(BOOL)arg3;
- (void)_showSearchField;
- (void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (id)_toFieldCollapsedTextColor;
- (void)_updateAddressBookProperties;
- (void)_updateRecipientViewLayouts;
- (void)_updateSearchResultsTable;
- (void)_updateShowingSearch;
- (void)_updateToField;
- (void)addRecipient:(id)arg1;
- (void)addRecipients:(id)arg1;
- (id)addressBookProperties;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (float)collapsedHeight;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (BOOL)didShowOneTimeErrorAlert;
- (BOOL)finishedComposingRecipients;
- (BOOL)forceMMS;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (BOOL)hasFailediMessageRecipients;
- (BOOL)hasPendingiMessageRecipients;
- (BOOL)hasTimedOutRecipients;
- (BOOL)hasUnreachableEmergencyRecipient;
- (BOOL)homogenizePreferredServiceForiMessage;
- (id)init;
- (id)initWithConversation:(id)arg1;
- (void)invalidateOutstandingIDStatusRequests;
- (BOOL)isEditable;
- (BOOL)isPeoplePickerHidden;
- (BOOL)isSearchResultsHidden;
- (void)loadView;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (id)peoplePickerController;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (unsigned int)presentationOptionsForRecipient:(id)arg1;
- (BOOL)preventAtomization;
- (id)recentContactForPresentedABCard;
- (id)recipientAvailabilities;
- (void)recipientAvailibilitiesDidUpdate;
- (id)recipientAvailibityTimers;
- (void)recipientSelectionControllerDidChange;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (id)recipients;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(id)arg2;
- (void)removeRecipient:(id)arg1;
- (void)reset;
- (id)searchListController;
- (void)searchListController:(id)arg1 accessoryPickedForRecipient:(id)arg2;
- (void)searchListController:(id)arg1 destinationsUpdated:(id)arg2;
- (void)searchListController:(id)arg1 didSelectRecipient:(id)arg2;
- (int)searchListController:(id)arg1 idStatusForIDSID:(id)arg2;
- (void)searchListControllerDidFinishSearch:(id)arg1;
- (void)searchListControllerDidScroll:(id)arg1;
- (void)setAddressBookProperties:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidShowOneTimeErrorAlert:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setForceMMS:(BOOL)arg1;
- (void)setPeoplePickerController:(id)arg1;
- (void)setPeoplePickerHidden:(BOOL)arg1;
- (void)setPreventAtomization:(BOOL)arg1;
- (void)setRecentContactForPresentedABCard:(id)arg1;
- (void)setRecipientAvailabilities:(id)arg1;
- (void)setRecipientAvailibityTimers:(id)arg1;
- (void)setSearchListController:(id)arg1;
- (void)setSearchResultsHidden:(BOOL)arg1;
- (void)setToField:(id)arg1;
- (void)setToFieldContainerView:(id)arg1;
- (void)setToFieldScrollingView:(id)arg1;
- (BOOL)shouldSuppressSearchResultsTable;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (id)toField;
- (id)toFieldContainerView;
- (BOOL)toFieldIsFirstResponder;
- (id)toFieldScrollingView;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewServiceWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
