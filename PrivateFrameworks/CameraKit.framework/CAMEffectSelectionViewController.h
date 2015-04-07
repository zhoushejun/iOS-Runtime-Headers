/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMEffectSelectionViewControllerDelegate>, CIFilter, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface CAMEffectSelectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSIndexPath *__selectedIndexPath;
    struct CGSize { 
        float width; 
        float height; 
    } _cellSize;
    UICollectionView *_collectionView;
    <CAMEffectSelectionViewControllerDelegate> *_delegate;
    NSArray *_effects;
    UICollectionViewFlowLayout *_layout;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
}

@property(copy,readonly) NSString * debugDescription;
@property <CAMEffectSelectionViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) CIFilter * selectedEffect;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_generateFilters;
- (void)_notifyEffectSelectedAndScrollIfNecessary;
- (void)_resetSelectedToOriginal;
- (void)_scrollToSelectedIndexAnimated:(BOOL)arg1;
- (void)_scrollToShowNextFilterNearEdge;
- (id)_selectedIndexPath;
- (void)_setSelectedIndexPath:(id)arg1;
- (id)_textForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)selectedEffect;
- (void)setDelegate:(id)arg1;
- (void)setSelectedEffect:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
