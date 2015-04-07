/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ABActionSheetDelegate, ABPersonViewControllerHelper, ABStyleProvider, NSString, UIImage;

@interface ABPersonTableViewSharingDelegate : NSObject {
    ABActionSheetDelegate *_actionSheetDelegate;
    ABPersonViewControllerHelper *_helper;
    UIImage *_shareLocationSnapshotImage;
    NSString *_shareLocationURL;
    NSString *_shareMessageBody;
    BOOL _shareMessageBodyIsHTML;
    NSString *_shareMessageSubject;
    ABStyleProvider *_styleProvider;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _willTweetLocationCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _willWeiboLocationCallback;

}

@property(readonly) BOOL canSendMMS;
@property(readonly) BOOL canSendMail;
@property(readonly) BOOL canShareContact;
@property(readonly) BOOL canTweet;
@property(readonly) BOOL canWeibo;
@property ABPersonViewControllerHelper * helper;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) NSString * shareLocationURL;
@property(copy) NSString * shareMessageBody;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageSubject;
@property(retain) ABStyleProvider * styleProvider;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;

+ (id)_fakePersonForMergedPeople:(id)arg1;

- (BOOL)canSendMMS;
- (BOOL)canSendMail;
- (BOOL)canShareContact;
- (BOOL)canTweet;
- (BOOL)canWeibo;
- (void)dealloc;
- (void)getVCardData:(id*)arg1 exportMode:(int)arg2 fileName:(id*)arg3;
- (id)helper;
- (id)init;
- (BOOL)loadChatKitAndReturnBundle:(id*)arg1;
- (BOOL)loadMessageUIAndReturnBundle:(id*)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)setHelper:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)shareContact:(id)arg1;
- (void)shareContactByEmail:(id)arg1;
- (void)shareContactByTextMessage:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2;
- (void)shareLocationOnTwitter:(id)arg1;
- (void)shareLocationOnWeibo:(id)arg1;
- (id)shareLocationSnapshotImage;
- (id)shareLocationURL;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (id)styleProvider;
- (id)vCardFileName;
- (id)willTweetLocationCallback;
- (id)willWeiboLocationCallback;

@end
