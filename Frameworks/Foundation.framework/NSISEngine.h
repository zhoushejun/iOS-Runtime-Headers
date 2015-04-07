/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSISEngineDelegate>, NSISVariable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface NSISEngine : NSObject <NSISVariableDelegate> {
    BOOL _accumulatingRemovals;
    int _automaticOptimizationDisabledCount;
    NSMapTable *_brokenConstraintNegativeErrors;
    NSMapTable *_brokenConstraintPositiveErrors;
    unsigned int _changeCountAtLastOptimization;
    <NSISEngineDelegate> *_delegate;
    int _engineDelegateCallsDisabledCount;
    struct CGSize { 
        float width; 
        float height; 
    } _engineScalingCoefficients;
    NSISVariable *_headForObjectiveRow;
    struct __CFDictionary { } *_integralizationAdjustmentsForConstraintMarkers;
    BOOL _lastOptimizationInvolvedIntegralization;
    NSMutableArray *_pendingRemovals;
    unsigned int _pivotCount;
    NSMutableDictionary *_recordedOperations;
    BOOL _revertsAfterUnsatisfiabilityHandler;
    NSMapTable *_rows;
    NSMapTable *_rowsCrossIndex;
    BOOL _shouldIntegralize;
    unsigned int _totalChangeCount;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _unsatisfiabilityHandler;

    int _variableDelegateCallsDisabledCount;
    NSMutableSet *_variablesWithIntegralizationViolations;
    NSMutableArray *_variablesWithValueRestrictionViolations;
}

@property(copy,readonly) NSString * debugDescription;
@property <NSISEngineDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property struct CGSize { float x1; float x2; } engineScalingCoefficients;
@property(readonly) unsigned int hash;
@property(retain) NSISVariable * headForObjectiveRow;
@property struct __CFDictionary { }* integralizationAdjustmentsForConstraintMarkers;
@property BOOL revertsAfterUnsatisfiabilityHandler;
@property(retain) NSMapTable * rows;
@property(retain) NSMapTable * rowsCrossIndex;
@property BOOL shouldIntegralize;
@property(readonly) Class superclass;
@property(retain) NSMutableSet * variablesWithIntegralizationViolations;
@property(retain) NSMutableArray * variablesWithValueRestrictionViolations;

- (id)_brokenConstraintNegativeErrors;
- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (id)_brokenConstraintPositiveErrors;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (void)_coreReplaceMarker:(id)arg1 withMarkerPlusDelta:(double)arg2;
- (void)_flushPendingRemovals;
- (void)addExpression:(id)arg1 priority:(float)arg2 times:(double)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5;
- (void)addExpression:(id)arg1 times:(double)arg2 toRowWithHead:(id)arg3 body:(id)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 toRowWithHead:(id)arg3 body:(id)arg4;
- (void)addVariable:(id)arg1 priority:(float)arg2 times:(double)arg3 toObjectiveRowWithHead:(id)arg4 body:(id)arg5;
- (void)addVariableToBeOptimized:(id)arg1 priority:(float)arg2;
- (id)allRowHeads;
- (void)beginRecording;
- (BOOL)bodyVarIsAmbiguous:(id)arg1 withPivotOfOutgoingRowHead:(id*)arg2;
- (id)candidateRedundantConstraints;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(float)arg2 toPriority:(float)arg3;
- (id)chooseHeadForRowBody:(id)arg1;
- (id)chooseOutgoingRowHeadForIncomingRowHead:(id)arg1;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(float)arg2;
- (id)constraints;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (id)createExpressionBySubstitutingForRowHeadVariablesInExpression:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct CGSize { float x1; float x2; })engineScalingCoefficients;
- (void)enumerateOriginalConstraints:(id)arg1;
- (void)enumerateRows:(id)arg1;
- (void)enumerateRowsCrossIndex:(id)arg1;
- (id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(BOOL)arg2;
- (BOOL)exerciseAmbiguityInVariable:(id)arg1;
- (id)fallbackMarkerForConstraintToBreakInRowWithHead:(id)arg1 body:(id)arg2;
- (id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(int)arg1;
- (void)fixupIntegralizationViolations;
- (id)handleUnsatisfiableRowWithHead:(id)arg1 body:(id)arg2 usingInfeasibilityHandlingBehavior:(int)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (BOOL)hasValue:(float*)arg1 forVariable:(id)arg2;
- (id)headForObjectiveRow;
- (BOOL)incoming:(id*)arg1 andOutgoing:(id*)arg2 rowHeadsThatMakeValueAmbiguousForVariable:(id)arg3;
- (id)init;
- (float)integralizationAdjustmentForMarker:(id)arg1;
- (struct __CFDictionary { }*)integralizationAdjustmentsForConstraintMarkers;
- (id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1;
- (id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1;
- (unsigned int)minimizeConstantInObjectiveRowWithHead:(id)arg1;
- (id)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (unsigned int)numberOfConstraintsEligibleForAdjustmentToIntegralizeVariable:(id)arg1 ignoringConstraintsWithMarkers:(id)arg2;
- (unsigned int)optimize;
- (id)outgoingRowHeadForRemovingConstraintWithMarker:(id)arg1;
- (void)performModifications:(id)arg1 withUnsatisfiableConstraintsHandler:(id)arg2;
- (unsigned int)pivotCount;
- (void)pivotToMakeBodyVar:(id)arg1 newHeadOfRowWithHead:(id)arg2 andDropRow:(BOOL)arg3;
- (id)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1;
- (void)rawRemoveRowWithHead:(id)arg1;
- (void)rawSetRowWithHead:(id)arg1 body:(id)arg2;
- (id)recordedCommandsData;
- (void)removeBodyVarFromAllRows:(id)arg1;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)removeRowWithHead:(id)arg1;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(float)arg2;
- (void)replaceMarker:(id)arg1 withMarkerPlusCoefficient:(double)arg2 timesVariable:(id)arg3;
- (unsigned int)replayCommandsData:(id)arg1 verifyingIntegrity:(BOOL)arg2;
- (BOOL)revertsAfterUnsatisfiabilityHandler;
- (id)rowBodyForHead:(id)arg1;
- (id)rowBodyForNonObjectiveHead:(id)arg1;
- (id)rowBodyForObjectiveHead:(id)arg1;
- (void)rowCrossIndexNoteBodyVariable:(id)arg1 wasAddedToRowWithHead:(id)arg2;
- (void)rowCrossIndexNoteBodyVariable:(id)arg1 wasRemovedFromRowWithHead:(id)arg2;
- (void)rowCrossIndexNoteDroppedBodyVar:(id)arg1;
- (id)rowHeadsForRowsContainingBodyVar:(id)arg1;
- (id)rows;
- (id)rowsCrossIndex;
- (void)setDelegate:(id)arg1;
- (void)setEngineScalingCoefficients:(struct CGSize { float x1; float x2; })arg1;
- (void)setHeadForObjectiveRow:(id)arg1;
- (void)setIntegralizationAdjustment:(float)arg1 forMarker:(id)arg2;
- (void)setIntegralizationAdjustmentsForConstraintMarkers:(struct __CFDictionary { }*)arg1;
- (void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setRevertsAfterUnsatisfiabilityHandler:(BOOL)arg1;
- (void)setRowWithHead:(id)arg1 body:(id)arg2;
- (void)setRows:(id)arg1;
- (void)setRowsCrossIndex:(id)arg1;
- (void)setShouldIntegralize:(BOOL)arg1;
- (void)setVariablesWithIntegralizationViolations:(id)arg1;
- (void)setVariablesWithValueRestrictionViolations:(id)arg1;
- (BOOL)shouldIntegralize;
- (void)substituteOutAllOccurencesOfBodyVar:(id)arg1 withExpression:(id)arg2;
- (BOOL)tryAddingDirectly:(id)arg1;
- (BOOL)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(float)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (BOOL)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(float)arg2 undoHandler:(id)arg3;
- (id)tryToOptimizeReturningMutuallyExclusiveConstraints;
- (BOOL)tryUsingArtificialVariableToAddConstraintWithMarker:(id)arg1 rowBody:(id)arg2 usingInfeasibilityHandlingBehavior:(int)arg3 mutuallyExclusiveConstraints:(id*)arg4;
- (float)valueForVariable:(id)arg1;
- (double)valueForVariableWithoutIntegralizationAdjustments:(id)arg1;
- (BOOL)valueOfVariableIsAmbiguous:(id)arg1;
- (id)variableToWorkOnAmongVariablesWithIntegralizationViolationsIgnoringLostCauses:(id)arg1 varsAlreadyAdjusted:(id)arg2;
- (id)variablesWithIntegralizationViolations;
- (id)variablesWithValueRestrictionViolations;
- (void)verifyInternalIntegrity;
- (void)withAutomaticOptimizationDisabled:(id)arg1;
- (void)withBehaviors:(unsigned int)arg1 performModifications:(id)arg2;
- (void)withDelegateCallsDisabled:(id)arg1;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(id)arg1;

@end
