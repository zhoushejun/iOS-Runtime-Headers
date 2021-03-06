/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface MDSearchAgent : MDAgent <MDSearchQueryService> {
    BOOL  _cancelled;
    NSString * _clientBundleID;
    BOOL  _finishedQuery;
    BOOL  _isInternal;
    unsigned int  _outBatchCount;
    NSString * _protectionClass;
    SPCoreSpotlightTask * _queryTask;
    NSObject<MDSearchQueryResultProcessor> * _resultProcessor;
    NSObject<MDIndexer> * _searchIndex;
}

@property BOOL cancelled;
@property (retain) NSString *clientBundleID;
@property BOOL finishedQuery;
@property BOOL isInternal;
@property (nonatomic, retain) NSString *protectionClass;
@property (nonatomic, retain) SPCoreSpotlightTask *queryTask;
@property (retain) NSObject<MDSearchQueryResultProcessor> *resultProcessor;
@property (retain) NSObject<MDIndexer> *searchIndex;

+ (id)clientXPCInterface;
+ (id)machServiceName;
+ (id)xpcInterface;

- (void).cxx_destruct;
- (void)_didReceiveResultsBatchCompletion;
- (void)_pullEntitlementsOffConnection:(id)arg1;
- (void)_willSendResultsBatch;
- (void)cancelWithCompletionHandler:(id /* block */)arg1;
- (BOOL)cancelled;
- (id)clientBundleID;
- (BOOL)finishedQuery;
- (id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3;
- (BOOL)isInternal;
- (id)protectionClass;
- (id)queryTask;
- (id)resultProcessor;
- (id)searchIndex;
- (void)setCancelled:(BOOL)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setFinishedQuery:(BOOL)arg1;
- (void)setIsInternal:(BOOL)arg1;
- (void)setProtectionClass:(id)arg1;
- (void)setQueryTask:(id)arg1;
- (void)setResultProcessor:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)startQuery:(id)arg1 withQueryContext:(id)arg2 resultProcessor:(id)arg3 completionHandler:(id /* block */)arg4;

@end
