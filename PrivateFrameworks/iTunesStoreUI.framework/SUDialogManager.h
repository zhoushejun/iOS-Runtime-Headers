/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSString;

@interface SUDialogManager : NSObject <ISSingleton, SUDialogDelegate> {
    NSMutableArray *_dialogs;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) int numberOfPendingDialogs;
@property(readonly) Class superclass;

+ (id)newDialogWithError:(id)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)_finishDialog:(id)arg1 withButtonIndex:(int)arg2;
- (BOOL)_haveEquivalentDialog:(id)arg1;
- (void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(int)arg2;
- (void)dealloc;
- (void)dialog:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dialogDidCancel:(id)arg1;
- (int)numberOfPendingDialogs;
- (BOOL)presentDialog:(id)arg1;
- (BOOL)presentDialog:(id)arg1 withCompletionBlock:(id)arg2;
- (BOOL)presentDialogForError:(id)arg1;
- (BOOL)presentDialogForError:(id)arg1 withCompletionBlock:(id)arg2;

@end
