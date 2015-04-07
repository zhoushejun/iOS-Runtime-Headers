/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNContact, NSArray, NSDecimalNumber, NSMutableArray, NSMutableDictionary, NSString, PKPassLibrary, PKPaymentApplication, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPaymentPass, PKPaymentRequest, PKPaymentTransaction, PKShippingMethod;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating> {
    NSArray *_acceptedPasses;
    CNContact *_billingAddress;
    PKPaymentOptionsDefaults *_defaults;
    unsigned int _holdPendingUpdatesCount;
    NSString *_hostAppLocalizedName;
    NSMutableArray *_items;
    PKPassLibrary *_library;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    PKPaymentRequest *_paymentRequest;
    PKPaymentTransaction *_pendingTransaction;
    PKPaymentOptionsRecents *_recents;
    CNContact *_shippingAddress;
    CNContact *_shippingEmail;
    PKShippingMethod *_shippingMethod;
    CNContact *_shippingPhone;
    NSDecimalNumber *_transactionAmount;
    NSMutableDictionary *_typeToItemMap;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateHandler;

}

@property(readonly) NSArray * acceptedPasses;
@property(retain) CNContact * billingAddress;
@property(readonly) NSString * currencyCode;
@property(copy,readonly) NSString * debugDescription;
@property(retain) PKPaymentOptionsDefaults * defaults;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSString * hostAppLocalizedName;
@property(readonly) NSArray * items;
@property(retain) PKPassLibrary * library;
@property(readonly) NSString * merchantName;
@property(retain) PKPaymentPass * pass;
@property(retain) PKPaymentApplication * paymentApplication;
@property(retain) PKPaymentRequest * paymentRequest;
@property(retain) NSArray * paymentSummaryItems;
@property(retain) PKPaymentTransaction * pendingTransaction;
@property(retain) PKPaymentOptionsRecents * recents;
@property(retain) CNContact * shippingAddress;
@property(retain) CNContact * shippingEmail;
@property(retain) PKShippingMethod * shippingMethod;
@property(retain) CNContact * shippingPhone;
@property(readonly) Class superclass;
@property(retain) NSDecimalNumber * transactionAmount;
@property(copy) id updateHandler;

- (void)_ensureItemForClass:(Class)arg1;
- (void)_ensureItems;
- (void)_ensurePlaceholderItems;
- (id)_inAppPaymentPassesForNetworks:(id)arg1;
- (id)_initialBillingContactForPropertyID:(int)arg1;
- (id)_initialShippingContactForPropertyID:(int)arg1;
- (void)_notifyModelChanged;
- (void)_setDataItem:(id)arg1;
- (id)acceptedPasses;
- (void)beginUpdates;
- (id)billingAddress;
- (id)currencyCode;
- (void)dealloc;
- (id)defaults;
- (void)endUpdates;
- (id)hostAppLocalizedName;
- (id)init;
- (BOOL)isValidWithError:(id*)arg1;
- (id)itemForType:(int)arg1;
- (id)items;
- (id)library;
- (id)merchantName;
- (id)pass;
- (id)paymentApplication;
- (id)paymentRequest;
- (id)paymentSummaryItems;
- (id)pendingTransaction;
- (id)recents;
- (void)rejectItemWithType:(int)arg1;
- (void)setBillingAddress:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setHostAppLocalizedName:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setPendingTransaction:(id)arg1;
- (void)setRecents:(id)arg1;
- (void)setShippingAddress:(id)arg1;
- (void)setShippingEmail:(id)arg1;
- (void)setShippingMethod:(id)arg1;
- (void)setShippingPhone:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setUpdateHandler:(id)arg1;
- (id)shippingAddress;
- (id)shippingEmail;
- (id)shippingMethod;
- (id)shippingPhone;
- (id)transactionAmount;
- (id)updateHandler;

@end
