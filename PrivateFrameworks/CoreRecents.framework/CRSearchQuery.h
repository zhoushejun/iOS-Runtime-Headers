/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSPredicate;

@interface CRSearchQuery : NSObject <NSSecureCoding> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _comparator;

    NSArray *_domains;
    unsigned int _implicitGroupThreshold;
    unsigned int _options;
    NSPredicate *_predicate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _weightDecayer;

}

@property(copy) id comparator;
@property(copy) NSArray * domains;
@property unsigned int implicitGroupThreshold;
@property unsigned int options;
@property(retain) NSPredicate * predicate;
@property(copy) id weightDecayer;

+ (id)frecencyComparator;
+ (id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned int)arg4;
+ (id)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (id)comparator;
- (void)dealloc;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)implicitGroupThreshold;
- (id)initWithCoder:(id)arg1;
- (unsigned int)options;
- (id)predicate;
- (void)setComparator:(id)arg1;
- (void)setDomains:(id)arg1;
- (void)setImplicitGroupThreshold:(unsigned int)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setPredicate:(id)arg1;
- (void)setWeightDecayer:(id)arg1;
- (id)weightDecayer;

@end
