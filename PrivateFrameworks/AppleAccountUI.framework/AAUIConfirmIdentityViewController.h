/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class <AAUIConfirmIdentityViewControllerDelegate>, AAUIProfilePictureStore, ACAccount, NSString, NSValue, UIButton, UIImage, UIImagePickerController, UILabel, UIScrollView, UIView;

@interface AAUIConfirmIdentityViewController : UIViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    ACAccount *_account;
    UIView *_contentView;
    UIButton *_continueButton;
    <AAUIConfirmIdentityViewControllerDelegate> *_delegate;
    UILabel *_descriptionLabel;
    UILabel *_emailLabel;
    UIImagePickerController *_imagePicker;
    UILabel *_nameLabel;
    UIImage *_newProfilePicture;
    NSValue *_newProfilePictureCropRect;
    UIView *_profilePhotoView;
    AAUIProfilePictureStore *_profilePictureStore;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UIButton *_useDifferentIDButton;
}

@property(copy,readonly) NSString * debugDescription;
@property <AAUIConfirmIdentityViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPhotoButtonWasTapped:(id)arg1;
- (float)_heightForText:(id)arg1 width:(float)arg2;
- (void)_photoWasTapped:(id)arg1;
- (void)_presentImagePickerWithSourceType:(int)arg1;
- (void)_showImagePickerForAvailableSources;
- (void)_showImageSourcePicker;
- (void)_updateViewsInPhotoArea:(id)arg1;
- (void)_useDifferentIDButtonWasTapped:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)continueButtonWasTapped:(id)arg1;
- (id)delegate;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithGrandSlamSigner:(id)arg1;
- (id)instructions;
- (void)loadView;
- (id)pageTitle;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (void)viewWillLayoutSubviews;

@end
