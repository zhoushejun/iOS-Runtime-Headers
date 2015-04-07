/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class <GKLeaderboardDelegate>, GKLeaderboardInternal, GKScore, NSArray, NSString;

@interface GKLeaderboard : NSObject {
    GKLeaderboardInternal *_internal;
    int _loadingCount;
    GKScore *_localPlayerScore;
    int _lock;
    int _playerScope;
    NSArray *_players;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSArray *_scores;
    int _timeScope;
    <GKLeaderboardDelegate> *_weakDelegate;
}

@property(copy) NSString * category;
@property <GKLeaderboardDelegate> * delegate;
@property(readonly) int friendRank;
@property(readonly) int friendRankCount;
@property(retain,readonly) NSString * groupIdentifier;
@property(copy) NSString * identifier;
@property(retain) GKLeaderboardInternal * internal;
@property(getter=isLoading,readonly) BOOL loading;
@property int loadingCount;
@property(retain) GKScore * localPlayerScore;
@property(retain,readonly) NSString * localizedTitle;
@property int lock;
@property(readonly) unsigned int maxRange;
@property(readonly) int overallRank;
@property(readonly) int overallRankCount;
@property int playerScope;
@property(retain) NSArray * players;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(retain) NSArray * scores;
@property int timeScope;
@property(copy,readonly) NSString * title;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadCategoriesWithCompletionHandler:(id)arg1;
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadLeaderboardsWithCompletionHandler:(id)arg1;
+ (id)localizedStringForTimeScope:(int)arg1;
+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(id)arg2;

- (void)dealloc;
- (void)decrementLoadingCountAtomically;
- (id)delegate;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)imageURL;
- (void)incrementLoadingCountAtomically;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithPlayerIDs:(id)arg1;
- (id)initWithPlayers:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLoading;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadScoresForRequest:(id)arg1 handler:(id)arg2;
- (void)loadScoresWithCompletionHandler:(id)arg1;
- (int)loadingCount;
- (id)localPlayerScore;
- (int)lock;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)miniImageURL;
- (int)playerScope;
- (id)players;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)scoreRequestForGame:(id)arg1;
- (id)scores;
- (void)setDelegate:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setLoadingCount:(int)arg1;
- (void)setLocalPlayerScore:(id)arg1;
- (void)setLock:(int)arg1;
- (void)setPlayerScope:(int)arg1;
- (void)setPlayers:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setScores:(id)arg1;
- (void)setTimeScope:(int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (int)timeScope;
- (id)valueForUndefinedKey:(id)arg1;

@end
