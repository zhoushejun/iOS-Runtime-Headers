/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface TSPReadCoordinatorBase : NSObject <TSPLazyReferenceDelegate, TSPReaderDelegate> {
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    struct hash_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo> > > { 
        struct __hash_table<std::__1::pair<long long, TSP::ExternalReferenceInfo>, __gnu_cxx::__hash_map_hasher<std::__1::pair<long long, TSP::ExternalReferenceInfo>, TSP::ObjectIdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<long long, TSP::ExternalReferenceInfo>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::pair<long long, TSP::ExternalReferenceInfo> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> *> { 
                    struct __hash_node<std::__1::pair<long long, TSP::ExternalReferenceInfo>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<long long, TSP::ExternalReferenceInfo>, TSP::ObjectIdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<long long, TSP::ExternalReferenceInfo>, std::__1::equal_to<long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _externalReferences;
    NSHashTable *_lazyReferenceCopies;
    NSMutableArray *_lazyReferenceObserverBlocks;
    NSObject<OS_dispatch_queue> *_lazyReferenceQueue;
    NSHashTable *_lazyReferences;
    struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > { 
        struct RepeatedExternalReferenceCompletionInfo {} *__begin_; 
        struct RepeatedExternalReferenceCompletionInfo {} *__end_; 
        struct __compressed_pair<TSP::RepeatedExternalReferenceCompletionInfo *, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > { 
            struct RepeatedExternalReferenceCompletionInfo {} *__first_; 
        } __end_cap_; 
    } _repeatedExternalReferences;
    BOOL _success;
}

@property(readonly) NSUUID * baseObjectUUID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long fileFormatVersion;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isCrossAppPaste;
@property(readonly) BOOL isCrossDocumentPaste;
@property(readonly) BOOL isFromPasteboard;
@property(readonly) BOOL isReadingFromDocument;
@property(readonly) BOOL success;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (id)baseObjectUUID;
- (id)context;
- (id)contextForReader:(id)arg1;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3;
- (struct ExternalReferenceInfo { long long x1; struct vector<TSP::ExternalReferenceCompletionInfo, std::__1::allocator<TSP::ExternalReferenceCompletionInfo> > { struct ExternalReferenceCompletionInfo {} *x_2_1_1; struct ExternalReferenceCompletionInfo {} *x_2_1_2; struct __compressed_pair<TSP::ExternalReferenceCompletionInfo *, std::__1::allocator<TSP::ExternalReferenceCompletionInfo> > { struct ExternalReferenceCompletionInfo {} *x_3_2_1; } x_2_1_3; } x2; }*)externalReferenceInfoForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (unsigned long long)fileFormatVersion;
- (id)init;
- (BOOL)isReadingFromDocument;
- (void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;
- (id)lazyReferenceDelegateForReader:(id)arg1;
- (id)objectDelegateForReader:(id)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (void)readDidFail;
- (BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(id)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(id)arg6;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (BOOL)resolveExternalReferences;
- (void)setLazyReferencesDelegateToObjectContext;
- (BOOL)success;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2;

@end
