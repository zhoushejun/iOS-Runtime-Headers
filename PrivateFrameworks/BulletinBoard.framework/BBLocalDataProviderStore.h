/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class <BBDataProviderStoreDelegate>, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BBLocalDataProviderStore : NSObject <BBDataProviderStore, BBLocalDataProviderFactoryStore> {
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_dataProvidersByUniversalSectionID;
    <BBDataProviderStoreDelegate> *_delegate;
    NSMutableArray *_localFactories;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_serverQueue;
}

@property(retain) NSMutableDictionary * dataProvidersBySectionID;
@property(retain) NSMutableDictionary * dataProvidersByUniversalSectionID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSMutableArray * localFactories;
@property(readonly) Class superclass;

+ (id)localDataProviderStoreWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;

- (void)_addDataProviderClass:(Class)arg1;
- (void)_addLocalDataProviderFactoryOfClass:(Class)arg1;
- (void)_loadDataProviderPluginBundle:(id)arg1;
- (void)_queue_addDataProvider:(id)arg1;
- (void)_queue_removeDataProvider:(id)arg1;
- (void)addDataProvider:(id)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4;
- (id)dataProviderForSectionID:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProvidersBySectionID;
- (id)dataProvidersByUniversalSectionID;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;
- (void)loadAllDataProviders;
- (id)localFactories;
- (void)performBlockOnDataProviders:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)setDataProvidersBySectionID:(id)arg1;
- (void)setDataProvidersByUniversalSectionID:(id)arg1;
- (void)setLocalFactories:(id)arg1;

@end
