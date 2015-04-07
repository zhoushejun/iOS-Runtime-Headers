/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class ALAssetsLibrary, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<SFAirDropActivityViewControllerDelegate>, NSOperationQueue, NSString, SFAirDropActiveIconView, SFAirDropBrowser, SFAirDropIconView, SFCollectionViewFlowLayout, SFWirelessSettingsController, UICollectionView, UILabel;

@interface SFAirDropActivityViewController : UIViewController <SFAirDropBrowserDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSLayoutConstraint *_airDropActiveIconLeftConstraint;
    SFAirDropActiveIconView *_airDropActiveIconView;
    NSLayoutConstraint *_airDropIconLeftConstraint;
    SFAirDropIconView *_airDropIconView;
    ALAssetsLibrary *_assetsLibrary;
    int _attachmentCount;
    SFAirDropBrowser *_browser;
    NSMutableSet *_cachedSharedItems;
    UICollectionView *_collectionView;
    BOOL _darkStyleOnLegacyApp;
    NSObject<SFAirDropActivityViewControllerDelegate> *_delegate;
    SFCollectionViewFlowLayout *_flowLayout;
    int _generatedPreviews;
    UILabel *_instructionsLabel;
    NSLayoutConstraint *_instructionsRightConstraint;
    BOOL _itemsReady;
    BOOL _itemsRequested;
    UILabel *_noWifiLabel;
    NSLayoutConstraint *_noWifiRightConstraint;
    NSMutableArray *_objectChanges;
    NSOperationQueue *_operationQueue;
    BOOL _otherActivityViewPresented;
    NSMutableDictionary *_personToProgress;
    NSMutableDictionary *_personToSharedItemsRequestID;
    NSMutableDictionary *_personToStoredTransferFinalState;
    id _progressToken;
    NSString *_sessionID;
    BOOL _sharedItemsAvailable;
    int _sharedItemsRequestID;
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;
    UILabel *_titleLabel;
    SFWirelessSettingsController *_wirelessSettings;
}

@property BOOL darkStyleOnLegacyApp;
@property(copy,readonly) NSString * debugDescription;
@property NSObject<SFAirDropActivityViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL otherActivityViewPresented;
@property BOOL sharedItemsAvailable;
@property(readonly) struct CGSize { float x1; float x2; } suggestedThumbnailSize;
@property(readonly) Class superclass;

+ (BOOL)airDropActivityCanPerformActivityWithItems:(id)arg1;
+ (id)classesForItem:(id)arg1;
+ (BOOL)isAirDropAvailable;

- (void).cxx_destruct;
- (BOOL)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (BOOL)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (void)adjustViewsToInterfaceOrientation:(int)arg1;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned int)arg2;
- (void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned int)arg2;
- (void)browserDidChangePeople:(id)arg1;
- (void)browserWillChangePeople:(id)arg1;
- (id)cellForPerson:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 completion:(id)arg6;
- (BOOL)darkStyleOnLegacyApp;
- (void)dealloc;
- (id)delegate;
- (void)didEnterBackground:(id)arg1;
- (void)enableAirDropRequiredFeatures;
- (void)generateSpecialPreviewPhotoForRequestID:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isBluetoothEnabled;
- (BOOL)isTetheredModeEnabled;
- (BOOL)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id*)arg3;
- (BOOL)isWifiEnabled;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)otherActivityViewPresented;
- (void)personCollectionViewCellDidFinishTransfer:(id)arg1;
- (void)personCollectionViewCellDidStartTransfer:(id)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsRequestingSharedItems;
- (void)setOtherActivityViewPresented:(BOOL)arg1;
- (void)setSharedItemsAvailable:(BOOL)arg1;
- (BOOL)sharedItemsAvailable;
- (void)startBrowsing;
- (void)startTransferForPeople:(id)arg1;
- (void)stopBrowsing;
- (void)subscribeToProgresses;
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;
- (struct CGSize { float x1; float x2; })suggestedThumbnailSize;
- (void)unpublishedProgressForPersonWithRealName:(id)arg1;
- (void)unsubscribeToProgresses;
- (void)updateContentAreaAnimated:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)wifiBtHelpTextLocalizedStringKey;
- (void)willEnterForeground:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)wirelessSettingsDidChange:(id)arg1;

@end
