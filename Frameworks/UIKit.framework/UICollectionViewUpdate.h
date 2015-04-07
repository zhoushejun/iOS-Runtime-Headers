/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, UICollectionView, UICollectionViewData;

@interface UICollectionViewUpdate : NSObject {
    id *_animatedFooters;
    id *_animatedHeaders;
    id *_animatedItems;
    UICollectionView *_collectionView;
    NSMutableIndexSet *_deletedSections;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableArray *_gaps;
    NSMutableIndexSet *_insertedSections;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    int *_newGlobalItemMap;
    UICollectionViewData *_newModel;
    int *_newSectionMap;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _newVisibleBounds;
    int *_oldGlobalItemMap;
    UICollectionViewData *_oldModel;
    int *_oldSectionMap;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _oldVisibleBounds;
    NSArray *_updateItems;
    NSMutableArray *_viewAnimations;
}

- (void)_computeGaps;
- (void)_computeItemUpdates;
- (void)_computeSectionUpdates;
- (void)_computeSupplementaryUpdates;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 updateItems:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 newVisibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg6;
- (id)newIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2;

@end
