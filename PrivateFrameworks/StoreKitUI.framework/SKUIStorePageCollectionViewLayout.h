/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSIndexSet, NSMapTable, NSString, UIColor;

@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout <SKUIStorePageCollectionViewLayout> {
    BOOL _allowsPinningTransitions;
    NSString *_backdropGroupName;
    UIColor *_collectionViewBackgroundColor;
    struct { 
        unsigned int respondsToIndexPathsForPinningItems : 1; 
        unsigned int respondsToPinningContentInsetForItemAtIndexPath : 1; 
        unsigned int respondsToPinningStyleForItemAtIndexPath : 1; 
        unsigned int respondsToPinningTransitionStyleForItemAtIndexPath : 1; 
        unsigned int respondsToWillApplyLayoutAttributes : 1; 
    } _collectionViewDelegateFlags;
    NSIndexSet *_expandChildPageSectionsIndexSet;
    BOOL _hasValidIndexPathsForPinningItems;
    BOOL _hasValidPinnedBackdropViewStyle;
    BOOL _hasValidPinningLayoutInformation;
    int _inLayoutAttributesForElementsCount;
    NSMapTable *_indexPathToItemPinningConfiguration;
    NSMapTable *_indexPathToPinningLayoutInformation;
    NSArray *_indexPathsForPinningItems;
    float _overrideContentWidth;
    int _pinnedBackdropViewStyle;
    BOOL _rendersWithPerspective;
    NSArray *_updateItems;
}

@property BOOL allowsPinningTransitions;
@property(copy) NSString * backdropGroupName;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSIndexSet * expandChildPageSectionsIndexSet;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * indexPathsForPinningItems;
@property float overrideContentWidth;
@property BOOL rendersWithPerspective;
@property(readonly) Class superclass;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (BOOL)_allowsBackdropDecorationForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (void)_appendAdditionalLayoutAttributesForPinningItemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toArray:(id)arg2;
- (void)_calculatePinningLayoutInformation;
- (void)_configureCellLayoutAttributes:(id)arg1 forItemWithPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 allowPinning:(BOOL)arg5 returningIsPinning:(out BOOL*)arg6;
- (id)_getCollectionViewUpdateItemForItemFromIndex:(int)arg1 initalLayout:(BOOL)arg2;
- (id)_indexPathsForPinningItems;
- (void)_invalidatePinningLayoutInformation;
- (id)_itemPinningConfigurationForItemAtIndexPath:(id)arg1;
- (id)_itemPinningLayoutInformationForItemAtIndexPath:(id)arg1;
- (id)_layoutAttributesForPinnedBackdropDecorationViewAtIndexPath:(id)arg1 pinningConfiguration:(id)arg2 layoutInformation:(id)arg3;
- (int)_pinnedBackdropViewStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_pinningContentInsetForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pinningFrameForStartingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 itemPinningConfiguration:(id)arg2 atIndexPath:(id)arg3;
- (int)_pinningStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (int)_pinningTransitionStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_targetFrameForStartingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 itemPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 returningIsPinning:(out BOOL*)arg5;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)allowsPinningTransitions;
- (id)backdropGroupName;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)expandChildPageSectionsIndexSet;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)indexPathsForPinningItems;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (float)overrideContentWidth;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (BOOL)rendersWithPerspective;
- (void)setAllowsPinningTransitions:(BOOL)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setExpandChildPageSectionsIndexSet:(id)arg1;
- (void)setOverrideContentWidth:(float)arg1;
- (void)setRendersWithPerspective:(BOOL)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
