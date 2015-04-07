/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSHashTable, NSMapTable, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString;

@interface ATAssetLinkController : NSObject <ATAssetLinkDelegate> {
    NSMutableOrderedSet *_assetLinks;
    NSMutableOrderedSet *_assetQueue;
    NSMapTable *_assetsToFailedLinks;
    NSMapTable *_assetsToLinks;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addFailedLink:(id)arg1 forAsset:(id)arg2;
- (void)_assetsDidChange;
- (BOOL)_canEnqueueAsset:(id)arg1;
- (BOOL)_canEnqueueAsset:(id)arg1 onLink:(id)arg2;
- (void)_cancelAsset:(id)arg1;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3;
- (void)addAssetLink:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allAssetLinks;
- (id)allAssets;
- (void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2;
- (void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4;
- (void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2;
- (void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3;
- (void)assetLinkDidChange:(id)arg1;
- (void)cancelAllAssetsMatchingPredicate:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)enqueueAssets:(id)arg1;
- (void)enqueueAssets:(id)arg1 progress:(id)arg2 completion:(id)arg3;
- (id)init;
- (void)prioritizeAsset:(id)arg1;
- (void)removeAssetLink:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
