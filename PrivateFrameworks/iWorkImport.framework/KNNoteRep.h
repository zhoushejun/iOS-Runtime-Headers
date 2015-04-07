/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<TSDContainerInfo>, NSString, TSWPRep;

@interface KNNoteRep : TSDRep <TSDContainerRep, TSWPStorageObserver> {
    TSWPRep *mContainedRep;
}

@property(readonly) TSWPRep * containedRep;
@property(readonly) NSObject<TSDContainerInfo> * containerInfo;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg1;
- (BOOL)canSelectChildRep:(id)arg1;
- (id)childReps;
- (float)columnHeight;
- (id)containedRep;
- (id)containerInfo;
- (void)dealloc;
- (id)editingRep;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)selectChildRep:(id)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 delta:(int)arg3 broadcastKind:(int)arg4;
- (void)updateChildrenFromLayout;
- (void)willBeRemoved;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;

@end
