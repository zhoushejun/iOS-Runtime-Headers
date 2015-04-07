/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AXSimpleRuntimeManager : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _applicationElementCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _attributeCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _clientObserverCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _hitTestCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _parameterizedAttributeCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _performActionCallback;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _setAttributeCallback;

    BOOL _systemWideServer;
}

@property(copy) id applicationElementCallback;
@property(copy) id attributeCallback;
@property(copy) id clientObserverCallback;
@property(copy) id hitTestCallback;
@property(copy) id parameterizedAttributeCallback;
@property(copy) id performActionCallback;
@property(copy) id setAttributeCallback;
@property BOOL systemWideServer;

+ (id)sharedManager;

- (id)applicationElementCallback;
- (id)attributeCallback;
- (id)clientObserverCallback;
- (id)hitTestCallback;
- (id)parameterizedAttributeCallback;
- (id)performActionCallback;
- (void)setApplicationElementCallback:(id)arg1;
- (id)setAttributeCallback;
- (void)setAttributeCallback:(id)arg1;
- (void)setClientObserverCallback:(id)arg1;
- (void)setHitTestCallback:(id)arg1;
- (void)setParameterizedAttributeCallback:(id)arg1;
- (void)setPerformActionCallback:(id)arg1;
- (void)setSetAttributeCallback:(id)arg1;
- (void)setSystemWideServer:(BOOL)arg1;
- (void)start;
- (BOOL)systemWideServer;

@end
