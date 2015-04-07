/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarNotesCell, NSString;

@interface EKEventNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem, UITextViewDelegate> {
    CalendarNotesCell *_cell;
    NSString *_lastTextChange;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldReturn:(id)arg1;

@end
