/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class NSDictionary, NSString, UIViewController;

@interface MPUExtrasJSITunesStore : IKJSITunesStore <IKJSITunesStore, MPUExtrasJSITunesStore, SKStoreProductViewControllerDelegatePrivate> {
    UIViewController *_formPresentationViewController;
}

@property(readonly) NSString * DSID;
@property(readonly) NSDictionary * accountInfo;
@property(retain) id cookie;
@property(retain) NSString * cookieURL;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property UIViewController * formPresentationViewController;
@property(readonly) unsigned int hash;
@property(readonly) NSString * networkConnectionType;
@property(retain) NSString * storefront;
@property(readonly) Class superclass;
@property(readonly) NSString * userAgent;

- (void).cxx_destruct;
- (id)formPresentationViewController;
- (void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2;
- (void)setFormPresentationViewController:(id)arg1;

@end
