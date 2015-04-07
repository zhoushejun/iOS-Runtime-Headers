/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeContactsSearchControllerDelegate>, MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber, NSString;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {
    NSNumber *_corecipientSearchTaskID;
    <MFMailComposeContactsSearchControllerDelegate> *_delegate;
    BOOL _foundAnySearchResults;
    MFContactsSearchManager *_manager;
    MFContactsSearchResultsModel *_model;
    NSNumber *_taskID;
    unsigned int _waitingOnSearchResultsCount;
}

@property(copy,readonly) NSString * debugDescription;
@property <MFMailComposeContactsSearchControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain) NSNumber * taskID;

- (void)_cancelSearchAndNotify:(BOOL)arg1;
- (void)_finishSearch;
- (void)beganNetworkActivity;
- (void)cancelSearch;
- (void)consumeSearchResults:(id)arg1 type:(unsigned int)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)init;
- (void)searchWithString:(id)arg1;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTaskID:(id)arg1;
- (id)taskID;

@end
