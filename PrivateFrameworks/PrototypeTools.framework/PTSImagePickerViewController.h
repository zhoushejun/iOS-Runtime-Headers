/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString, PTSImageLoader, UIImagePickerController, UIPopoverController;

@interface PTSImagePickerViewController : UITableViewController <PTSImageLoaderDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    BOOL _doneLoading;
    NSMutableArray *_filenames;
    PTSImageLoader *_imageLoader;
    NSMutableArray *_images;
    BOOL _includePhotoLibrary;
    UIImagePickerController *_photoLibraryPicker;
    UIPopoverController *_popoverController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL includePhotoLibrary;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forFilename:(id)arg3;
- (void)imageLoaderDidFinishLoadingImages:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (BOOL)includePhotoLibrary;
- (id)initWithResourcePath:(id)arg1 completion:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setIncludePhotoLibrary:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end
