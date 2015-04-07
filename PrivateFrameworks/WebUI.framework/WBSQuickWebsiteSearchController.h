/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WBSQuickWebsiteSearchController : NSObject {
    NSMutableDictionary *_hostSetsByOpenSearchDescriptionDocumentURLString;
    NSMutableDictionary *_openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary *_quickWebsiteSearchProvidersByHost;
    NSObject<OS_dispatch_queue> *_quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    BOOL _quickWebsiteSearchProvidersLoadedFromDisk;
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > { 
        struct __compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > { 
            struct CoalescedAsynchronousWriter {} *__first_; 
        } __ptr_; 
    } _writer;
}

@property(readonly) NSArray * quickWebsiteSearchHosts;
@property BOOL quickWebsiteSearchProvidersLoadedFromDisk;

+ (id)sharedController;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)_didCollectOpenSearchDescription:(id)arg1;
- (void)_didFinishLoadingFromDisk;
- (void)_loadFromDisk;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (BOOL)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1;
- (void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (void)_resetCachedDataWithCompletionHandler:(id)arg1;
- (void)_saveToDiskSoon;
- (id)_searchDescriptionsURL;
- (void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2;
- (BOOL)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1;
- (void)beginLoadingFromDiskIfNeeded;
- (void)clear;
- (void)didPerformSearchWithProvider:(id)arg1;
- (id)init;
- (void)noteProvidersAreStale;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1;
- (id)providerForSourcePageURLString:(id)arg1;
- (id)providersMatchingQueryString:(id)arg1;
- (id)quickWebsiteSearchHosts;
- (BOOL)quickWebsiteSearchProvidersLoadedFromDisk;
- (void)removeProviderWithHost:(id)arg1;
- (void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)removeProvidersWithHosts:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)setQuickWebsiteSearchProvidersLoadedFromDisk:(BOOL)arg1;
- (void)setSearchURLTemplateStringFromForm:(id)arg1 forSourcePageURLString:(id)arg2;

@end
