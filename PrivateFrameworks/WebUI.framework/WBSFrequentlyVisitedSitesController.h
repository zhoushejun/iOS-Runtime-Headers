/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory;

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    WBSHistory *_history;
    double _timeOfLastFrequentlyVisitedSitesComputation;
}

@property(readonly) NSArray * frequentlyVisitedSites;

+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2;
+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 withMinimumVisitCount:(unsigned int)arg3;
+ (float)scoreForHistoryItemOnHistoryQueue:(id)arg1 atTime:(double)arg2;
+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3;
+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 withMinimumVisitCount:(unsigned int)arg4;

- (void).cxx_destruct;
- (id)_canonicalizedFavoritesURLStringSet;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (BOOL)_saveFrequentlyVisitedSites:(id)arg1;
- (float)_scoreForHistoryItemOnHistoryQueue:(id)arg1;
- (void)_updateFrequentlyVisitedSitesWithCandidates:(id)arg1;
- (void)clearFrequentlyVisitedSites;
- (id)frequentlyVisitedSites;
- (id)initWithHistory:(id)arg1 bannedURLStore:(id)arg2;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;

@end
