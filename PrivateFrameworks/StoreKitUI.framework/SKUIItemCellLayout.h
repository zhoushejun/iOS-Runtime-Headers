/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUICellImageView, SKUIItemOffer, SKUIItemOfferButton, SKUIItemOfferButtonAppearance, SKUIItemState, UIImage, UILabel, UIView;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate> {
    BOOL _hidesItemOfferButton;
    BOOL _highlighted;
    BOOL _iconImageHidden;
    SKUICellImageView *_iconImageView;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    UILabel *_itemOfferNoticeLabel;
    SKUIItemState *_itemState;
    UIView *_removeControlView;
    BOOL _restricted;
    BOOL _selected;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL displaysItemOfferButton;
@property(readonly) unsigned int hash;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIImage * iconImage;
@property(getter=isIconImageHidden) BOOL iconImageHidden;
@property(readonly) UIView * iconImageView;
@property(retain) SKUIItemOffer * itemOffer;
@property(readonly) SKUIItemOfferButton * itemOfferButton;
@property(retain) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;
@property(readonly) UILabel * itemOfferNoticeLabel;
@property(copy) NSString * itemOfferNoticeString;
@property(copy) SKUIItemState * itemState;
@property(readonly) UIView * removeControlView;
@property(getter=isRestricted) BOOL restricted;
@property(getter=isSelected) BOOL selected;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowItemOfferNotice;
- (void)_cancelItemOfferConfirmationAction:(id)arg1;
- (void)_getParentTableView:(id*)arg1 collectionView:(id*)arg2;
- (void)_itemOfferConfirmAction:(id)arg1;
- (id)_parentCollectionViewCell;
- (void)_reloadItemOfferButton:(BOOL)arg1;
- (void)_reloadItemOfferVisibility;
- (void)_showItemOfferConfirmationAction:(id)arg1;
- (BOOL)_useCloudButtonForItemState:(id)arg1;
- (void)dealloc;
- (BOOL)displaysItemOfferButton;
- (id)iconImage;
- (id)iconImageView;
- (BOOL)isHighlighted;
- (BOOL)isIconImageHidden;
- (BOOL)isRestricted;
- (BOOL)isSelected;
- (id)itemOffer;
- (id)itemOfferButton;
- (id)itemOfferButtonAppearance;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)itemOfferNoticeLabel;
- (id)itemOfferNoticeString;
- (id)itemState;
- (void)layoutForItemOfferChange;
- (void)prepareForReuse;
- (id)removeControlView;
- (void)resetLayout;
- (void)setBackgroundColor:(id)arg1;
- (void)setDisplaysItemOfferButton:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageHidden:(BOOL)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (void)setItemOfferNoticeString:(id)arg1;
- (void)setItemState:(id)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)setRestricted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end
