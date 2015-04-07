/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EKEvent, NSMutableArray, NSString;

@interface EKUIInviteesViewRespondedInviteesSection : NSObject <EKUIInviteesViewSection> {
    NSString *_cachedCellReuseIdentifier;
    BOOL _editable;
    EKEvent *_event;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _participantRemoved;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _participantTapped;

    NSMutableArray *_participants;
    unsigned int _reuseIdentifierVersion;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _tableViewCellHook;

}

@property(retain) NSString * cachedCellReuseIdentifier;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL editable;
@property(retain) EKEvent * event;
@property(readonly) unsigned int hash;
@property(copy) id participantRemoved;
@property(copy) id participantTapped;
@property(retain) NSMutableArray * participants;
@property unsigned int reuseIdentifierVersion;
@property(readonly) Class superclass;
@property(copy) id tableViewCellHook;

- (void).cxx_destruct;
- (BOOL)_isValidRow:(int)arg1;
- (id)cachedCellReuseIdentifier;
- (BOOL)canEditRow:(id)arg1;
- (BOOL)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)commitEditingStyle:(int)arg1 forRow:(id)arg2;
- (id)debugTitle;
- (BOOL)editable;
- (int)editingStyleForRow:(id)arg1;
- (float)estimatedHeightForRow:(id)arg1;
- (id)event;
- (id)headerTitle;
- (unsigned int)numberOfRows;
- (id)participantRemoved;
- (id)participantTapped;
- (id)participants;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned int)reuseIdentifierVersion;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setCachedCellReuseIdentifier:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEvent:(id)arg1;
- (void)setParticipantRemoved:(id)arg1;
- (void)setParticipantTapped:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setReuseIdentifierVersion:(unsigned int)arg1;
- (void)setTableViewCellHook:(id)arg1;
- (id)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1 editable:(BOOL)arg2;

@end
