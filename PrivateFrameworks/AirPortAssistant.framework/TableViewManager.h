/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <TableViewManagerDelegate>, ManagedTableViewCell, NSIndexPath, NSMutableDictionary, NSString, UIColor, UITableView, UIView;

@interface TableViewManager : NSObject <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    float _cellContentWidth;
    float _cellLeftEdgeOrigin;
    UIView *_currentFirstResponder;
    NSIndexPath *_currentFirstResponderCellPath;
    id _delegate;
    UIColor *_detailTextColor;
    UIColor *_editTextColor;
    ManagedTableViewCell *_gLayoutGenericCell;
    ManagedTableViewCell *_gLayoutNoBackgroundCell;
    BOOL _handlingBulkUpdate;
    UITableView *_managedTableView;
    UIColor *_selectedTextColor;
    UIColor *_subtitleColor;
    NSMutableDictionary *_tableDescriptorDict;
}

@property(copy,readonly) NSString * debugDescription;
@property <TableViewManagerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) UITableView * managedTableView;
@property(readonly) Class superclass;

+ (id)boldSystemLabelFont;
+ (id)smallSystemLabelFont;
+ (id)systemLabelFont;

- (id)activityView:(id)arg1;
- (void)addSectionInfo:(id)arg1;
- (void)addSectionInfo:(id)arg1 animated:(BOOL)arg2;
- (void)appendNewRow:(id)arg1 forSection:(unsigned int)arg2;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponderAtIndexPath:(id)arg1;
- (void)bulkUpdateBegin;
- (void)bulkUpdateEnd;
- (void)buttonAction:(id)arg1;
- (id)buttonView:(id)arg1;
- (id)cellInfoOfSelectedRowInMenuSection:(unsigned int)arg1;
- (BOOL)checkIfSectionDataSameInTable:(id)arg1;
- (void)cleanTableViewForReuse;
- (id)commonAddOptionalBasicImage:(id)arg1 withNeighborItem:(id)arg2 toCellItems:(id)arg3;
- (id)commonAddOptionalStaticText:(id)arg1 withNeighborItem:(id)arg2 toCellItems:(id)arg3;
- (id)createRowStyleActivityStatus:(BOOL)arg1 text1:(id)arg2 grayedText1:(BOOL)arg3 text2:(id)arg4 grayedText2:(BOOL)arg5 withTag:(unsigned int)arg6;
- (id)createRowStyleBasicButtons:(id)arg1 title2:(id)arg2 withTag:(unsigned int)arg3;
- (id)createRowStyleBasicEditableWithImage:(id)arg1 labelText:(id)arg2 currentValue:(id)arg3 placeholderText:(id)arg4 isSecure:(BOOL)arg5 keyboardType:(int)arg6 withTag:(unsigned int)arg7;
- (id)createRowStyleBasicOnOffWithImage:(id)arg1 labelText:(id)arg2 isOn:(BOOL)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleBasicWholeCellButton:(id)arg1 withTag:(unsigned int)arg2;
- (id)createRowStyleBasicWithImage:(id)arg1 text1:(id)arg2 text2:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleBasicWithText:(id)arg1 centerImage:(id)arg2 text2:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleBasicWithUnreadBubble:(unsigned int)arg1 text1:(id)arg2 text2:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleDatePicker:(id)arg1 minimumDate:(id)arg2 maximumDate:(id)arg3 withMode:(int)arg4 withTag:(unsigned int)arg5;
- (id)createRowStyleProgressViewWithCancelAndStatus:(id)arg1 statusText:(id)arg2 altText:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleSegmentedControlWithItems:(id)arg1 selectedSegmentIndex:(id)arg2 enabled:(BOOL)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleSubtitleWitImage:(id)arg1 mainText:(id)arg2 subtitleText:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleSubtitleWithRightImage:(id)arg1 subtitleText:(id)arg2 rightImage:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleSubtitleWithRightText:(id)arg1 subtitleText:(id)arg2 rightText:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleTitledParagraph:(id)arg1 titleImage:(id)arg2 bodyText:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleTitledParagraphWithLeftImage:(id)arg1 title:(id)arg2 bodyText:(id)arg3 withTag:(unsigned int)arg4;
- (id)createRowStyleTitledStaticMultiline:(id)arg1 titleImage:(id)arg2 bodyText:(id)arg3 withTag:(unsigned int)arg4;
- (id)datePicker:(id)arg1;
- (void)dealloc;
- (void)deferedTouchInCellAtIndexPath:(id)arg1;
- (id)delegate;
- (void)deleteAllRowsInSection:(unsigned int)arg1;
- (void)deleteAllRowsInSectionCore:(unsigned int)arg1;
- (void)deleteRowInSection:(unsigned int)arg1 withTag:(int)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)deleteSection:(unsigned int)arg1;
- (void)deleteSectionWithIdentifier:(id)arg1;
- (void)deleteSectionWithIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(int)arg2;
- (id)editTextView:(id)arg1;
- (void)endEditing;
- (unsigned int)findAndSetItemObject:(id)arg1 toValue:(id)arg2 inCellWithInternalRowSectionTagValue:(unsigned int)arg3;
- (id)findFirstResponderInTableView:(id)arg1 foundParentCell:(id*)arg2;
- (id)findFirstResponderInTableView:(id)arg1 fromSection:(unsigned int)arg2 fromRow:(unsigned int)arg3 foundParentCell:(id*)arg4;
- (id)findFirstResponderInView:(id)arg1;
- (id)findNextResponderInTableView:(id)arg1 foundParentCell:(id*)arg2;
- (id)getCellDictForCellAtIndexPath:(id)arg1;
- (id)getDescriptorObjectForKey:(id)arg1 inSection:(int)arg2;
- (id)getInfoForItemOfType:(id)arg1 atItemTypeIndex:(unsigned int)arg2 inCell:(id)arg3;
- (id)getRepresentedObjectForCellAtIndexPath:(id)arg1;
- (id)getRowArrayForSection:(unsigned int)arg1;
- (id)getSectionDictForSection:(int)arg1;
- (id)getValueForFirstItemOfType:(id)arg1 inCellAtIndexPath:(id)arg2;
- (id)getValueForFirstItemOfType:(id)arg1 inCellWithTag:(int)arg2;
- (id)getValueForItemOfType:(id)arg1 atItemTypeIndex:(unsigned int)arg2 inCell:(id)arg3;
- (id)getValueForItemOfType:(id)arg1 atItemTypeIndex:(unsigned int)arg2 inCellAtIndexPath:(id)arg3;
- (id)getValueForItemOfType:(id)arg1 atItemTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (void)hideKeyboard;
- (id)imageView:(id)arg1;
- (unsigned int)indexOfSectionWithIdentifier:(id)arg1;
- (unsigned int)indexOfSelectedRowInMenuSection:(unsigned int)arg1;
- (id)indexPathOfCellWithTag:(int)arg1;
- (id)indexPathOfFirstCellWithUnverifiedVerifier;
- (void)informOfNewCellLeftEdge:(float)arg1 andWidth:(float)arg2;
- (id)init;
- (void)initializeTableViewManagerCommon;
- (void)insertNewRows:(id)arg1 atIndexPaths:(id)arg2 withRowAnimation:(int)arg3;
- (void)insertSectionInfo:(id)arg1 atIndex:(unsigned int)arg2 withRowAnimation:(int)arg3;
- (BOOL)isCellAtIndexPath:(id)arg1 identicalToNewRow:(id)arg2;
- (id)labelView:(id)arg1;
- (void)makeFirstEditableCellCurrentResponder;
- (id)managedTableView;
- (id)multilineLabelView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)progressView:(id)arg1;
- (void)recordInitialSelectedMenuItemsForNewSection:(int)arg1;
- (void)reloadSection:(unsigned int)arg1;
- (void)segmentedControlValueChanged:(id)arg1;
- (id)segmentedControlView:(id)arg1;
- (void)selectMenuCellAtIndexPath:(id)arg1;
- (void)selectedDateChanged:(id)arg1;
- (void)setActivityViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setButtonViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setCellRowInfoItem:(id)arg1 atIndex:(unsigned int)arg2 forKey:(id)arg3 toValue:(id)arg4;
- (void)setDatePickerValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDescriptorObject:(id)arg1 forKey:(id)arg2 inSection:(int)arg3;
- (void)setEditTextViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setImageViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setLabelViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setManagedTableView:(id)arg1;
- (void)setMenuCell:(id)arg1 visualStateToSelected:(BOOL)arg2 atIndexPath:(id)arg3;
- (void)setMinValue:(id)arg1 andMaxValue:(id)arg2 forItem:(id)arg3;
- (void)setMinValue:(id)arg1 andMaxValue:(id)arg2 forItemOfType:(id)arg3 atItemTypeIndex:(unsigned int)arg4 inCellWithTag:(int)arg5;
- (void)setMultilineLabelViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setNewRow:(id)arg1 accessoryType:(int)arg2;
- (void)setNewRow:(id)arg1 accessoryView:(id)arg2;
- (void)setNewRow:(id)arg1 editingAccessoryType:(int)arg2;
- (void)setNewRow:(id)arg1 editingAccessoryView:(id)arg2;
- (void)setNewRow:(id)arg1 editingStyle:(int)arg2;
- (BOOL)setNewRow:(id)arg1 itemAttribute:(id)arg2 forItemOfType:(id)arg3 atItemTypeIndex:(unsigned int)arg4 toValue:(id)arg5;
- (void)setNewRow:(id)arg1 representedObject:(id)arg2;
- (void)setNewRow:(id)arg1 selectableCell:(BOOL)arg2;
- (void)setNewRow:(id)arg1 tag:(unsigned int)arg2;
- (void)setNewRow:(id)arg1 textFieldViewMode:(int)arg2;
- (void)setNewRow:(id)arg1 verifierAccessoryType:(int)arg2;
- (void)setProgressViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setRepresentedObject:(id)arg1 forCellAtIndexPath:(id)arg2;
- (void)setSectionValue:(id)arg1 forKey:(id)arg2 inSection:(unsigned int)arg3;
- (void)setSwitchViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setUnreadBubbleCountValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)setValue:(id)arg1 forItem:(id)arg2;
- (void)setValue:(id)arg1 forItemOfType:(id)arg2 atItemTypeIndex:(unsigned int)arg3 inCellAtIndexPath:(id)arg4;
- (void)setValue:(id)arg1 forItemOfType:(id)arg2 atItemTypeIndex:(unsigned int)arg3 inCellWithTag:(int)arg4;
- (void)setVerifierAccessoryView:(int)arg1 forCell:(id)arg2;
- (void)setVerifierCellAccessoryType:(int)arg1 forCellsAtIndexPaths:(id)arg2;
- (void)switchAction:(id)arg1;
- (id)switchView:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 layoutMode:(BOOL)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (BOOL)tagOfCellAtIndexPath:(id)arg1 tag:(int*)arg2;
- (unsigned int)tagOfSelectedRowInMenuSection:(unsigned int)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldHasVerifierAtIndexPath:(id)arg1;
- (BOOL)textFieldIsSecureAndUnchanged:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldVerifiedAtIndexPath:(id)arg1;
- (float)totalTableHeight;
- (float)totalTableSectionsHeight;
- (void)uiTextFieldDidChange:(id)arg1;
- (id)unreadBubbleCount:(id)arg1;
- (void)updateCellAtIndexPath:(id)arg1 withNewRowInfo:(id)arg2;
- (void)updateFooter:(id)arg1 forSectionWithIdentifier:(id)arg2;
- (void)updateFooter:(id)arg1 inSection:(unsigned int)arg2;
- (void)updateHeader:(id)arg1 forSectionWithIdentifier:(id)arg2;
- (void)updateHeader:(id)arg1 inSection:(unsigned int)arg2;
- (BOOL)updateRowAtIndexPath:(id)arg1 withNewRowInfo:(id)arg2;
- (void)updateSectionDataInIdenticalTable:(id)arg1;
- (BOOL)updateSectionsIfMatchingExisting:(id)arg1;
- (BOOL)verifyStr1:(id)arg1 forTag1:(unsigned int)arg2 matchesStr2:(id)arg3 forTag2:(unsigned int)arg4;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)wholeCellButtonView:(id)arg1;

@end
