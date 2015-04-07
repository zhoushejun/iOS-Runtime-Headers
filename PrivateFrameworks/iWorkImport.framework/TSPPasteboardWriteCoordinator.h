/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSPProxyObjectManager>, NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL, TSPArchiverManager, TSPObjectContext;

@interface TSPPasteboardWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPObjectModifyDelegate, TSPProxyObjectManager> {
    TSPArchiverManager *_archiverManager;
    TSPObjectContext *_context;
    NSMutableArray *_dataFinalizeHandlers;
    NSHashTable *_delayedObjects;
    NSObject<OS_dispatch_queue> *_delayedObjectsQueue;
    <TSPProxyObjectManager> *_proxyManager;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property <TSPProxyObjectManager> * proxyManager;
@property(readonly) NSURL * relativeURLForExternalData;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDataFinalizeHandlerForSuccessfulSave:(id)arg1;
- (void)archiverManager:(id)arg1 didCreateArchiver:(id)arg2;
- (BOOL)archiverManager:(id)arg1 shouldDelayArchivingObject:(id)arg2;
- (void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(id)arg4;
- (BOOL)componentWriter:(id)arg1 shouldDelayWritingObject:(id)arg2;
- (void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(id)arg4;
- (id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 claimingComponent:(id)arg3;
- (void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (id)createPackageMetadataWithContext:(id)arg1 writingDatas:(id)arg2 toDictionary:(id)arg3;
- (void)dealloc;
- (void)delayArchivingOfObject:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)proxyForReferencedObject:(id)arg1;
- (id)proxyManager;
- (id)relativeURLForExternalData;
- (void)setProxyManager:(id)arg1;
- (BOOL)shouldDelayArchivingObject:(id)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;
- (void)writePasteboardObject:(id)arg1 completion:(id)arg2;

@end
