/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, UICollectionReusableView, UICollectionViewLayoutAttributes;

@interface UICollectionViewAnimation : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animationBlock;

    struct { 
        unsigned int animateFromCurrentPosition : 1; 
        unsigned int deleteAterAnimation : 1; 
        unsigned int rasterizeAfterAnimation : 1; 
        unsigned int resetRasterizationAfterAnimation : 1; 
    } _collectionViewAnimationFlags;
    NSMutableArray *_completionHandlers;
    float _endFraction;
    UICollectionViewLayoutAttributes *_finalLayoutAttributes;
    float _startFraction;
    NSMutableArray *_startupHandlers;
    UICollectionReusableView *_view;
    int _viewType;
}

@property(readonly) BOOL animateFromCurrentPosition;
@property(readonly) BOOL deleteAfterAnimation;
@property(readonly) float endFraction;
@property(readonly) UICollectionViewLayoutAttributes * finalLayoutAttributes;
@property BOOL rasterizeAfterAnimation;
@property BOOL resetRasterizationAfterAnimation;
@property(readonly) float startFraction;
@property(readonly) UICollectionReusableView * view;
@property(readonly) int viewType;

- (void)addCompletionHandler:(id)arg1;
- (void)addStartupHandler:(id)arg1;
- (BOOL)animateFromCurrentPosition;
- (void)dealloc;
- (BOOL)deleteAfterAnimation;
- (id)description;
- (float)endFraction;
- (id)finalLayoutAttributes;
- (id)initWithView:(id)arg1 viewType:(int)arg2 finalLayoutAttributes:(id)arg3 startFraction:(float)arg4 endFraction:(float)arg5 animateFromCurrentPostion:(BOOL)arg6 deleteAfterAnimation:(BOOL)arg7 customAnimations:(id)arg8;
- (BOOL)rasterizeAfterAnimation;
- (BOOL)resetRasterizationAfterAnimation;
- (void)setRasterizeAfterAnimation:(BOOL)arg1;
- (void)setResetRasterizationAfterAnimation:(BOOL)arg1;
- (void)start;
- (float)startFraction;
- (id)view;
- (int)viewType;

@end
