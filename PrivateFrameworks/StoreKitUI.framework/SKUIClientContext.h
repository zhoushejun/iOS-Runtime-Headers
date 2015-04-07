/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class IKAppContext, NSArray, NSBundle, NSDictionary, NSMapTable, NSMutableArray, NSString, SKUIApplicationController, SKUILocalizedStringDictionary, SKUIStoreDialogController, SKUIURL, SKUIURLBag, SSURLBag, SSVPlatformContext, SUClientInterface;

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate> {
    NSString *_additionalPurchaseParameters;
    SKUIApplicationController *_applicationController;
    NSBundle *_bundle;
    SUClientInterface *_clientInterface;
    NSDictionary *_configurationDictionary;
    SKUIStoreDialogController *_dialogController;
    SKUILocalizedStringDictionary *_localizedStrings;
    NSString *_metricsConfigurationIdentifier;
    NSMapTable *_metricsPageContexts;
    NSMutableArray *_navigationHistory;
    NSString *_navigationHistoryPersistenceKey;
    NSString *_purchaseAffiliateIdentifier;
    SKUIURL *_purchaseReferrerURL;
    int _purchaseURLBagType;
    IKAppContext *_scriptAppContext;
    NSString *_storeFrontIdentifier;
    SKUIURLBag *_urlBag;
    int _userInterfaceIdiomOverride;
}

@property(readonly) SSURLBag * URLBag;
@property(getter=_applicationController,setter=_setApplicationController:) SKUIApplicationController * _applicationController;
@property(getter=_scriptAppContext,setter=_setScriptAppContext:,retain) IKAppContext * _scriptAppContext;
@property(readonly) SUClientInterface * clientInterface;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * metricsConfigurationIdentifier;
@property(readonly) NSArray * navigationHistory;
@property(copy) NSString * navigationHistoryPersistenceKey;
@property(readonly) SSVPlatformContext * platformContext;
@property(copy) SKUIURL * purchaseReferrerURL;
@property(readonly) NSString * storeFrontIdentifier;
@property(readonly) Class superclass;
@property int userInterfaceIdiomOverride;

+ (id)_cachePathForStoreFrontIdentifier:(id)arg1;
+ (id)_configurationDictionaryWithBagDictionary:(id)arg1;
+ (id)defaultContext;

- (void).cxx_destruct;
- (id)URLBag;
- (id)_applicationController;
- (id)_navigationHistory;
- (id)_scriptAppContext;
- (void)_setAdditionalPurchaseParameters:(id)arg1;
- (void)_setApplicationController:(id)arg1;
- (void)_setPurchaseAffiliateIdentifier:(id)arg1;
- (void)_setPurchaseURLBagType:(int)arg1;
- (void)_setScriptAppContext:(id)arg1;
- (void)_setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (id)clientInterface;
- (void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
- (void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(id)arg3;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)customizePurchase:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)getDefaultMetricsControllerWithCompletionBlock:(id)arg1;
- (id)initWithConfigurationDictionary:(id)arg1;
- (void)loadValueForConfigurationKey:(id)arg1 completionBlock:(id)arg2;
- (id)localizedAlertWithError:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)metricsConfigurationIdentifier;
- (id)metricsPageContextForViewController:(id)arg1;
- (id)navigationHistory;
- (id)navigationHistoryPersistenceKey;
- (id)platformContext;
- (id)purchaseReferrerURL;
- (void)pushNavigationHistoryPageIdentifier:(id)arg1;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)setMetricsConfigurationIdentifier:(id)arg1;
- (void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2;
- (void)setNavigationHistoryPersistenceKey:(id)arg1;
- (void)setPurchaseReferrerURL:(id)arg1;
- (void)setUserInterfaceIdiomOverride:(int)arg1;
- (id)storeFrontIdentifier;
- (id)tabBarItemsForStyle:(int)arg1;
- (int)userInterfaceIdiomOverride;
- (id)valueForConfigurationKey:(id)arg1;

@end
