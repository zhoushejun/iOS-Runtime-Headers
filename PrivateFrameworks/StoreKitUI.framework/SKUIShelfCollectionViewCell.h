/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UICollectionView;

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView> {
    UICollectionView *_collectionView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    BOOL _rendersWithPerspective;
}

@property(retain) UICollectionView * collectionView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL rendersWithPerspective;
@property(readonly) Class superclass;

+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)collectionView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)layoutSubviews;
- (BOOL)rendersWithPerspective;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setRendersWithPerspective:(BOOL)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end
