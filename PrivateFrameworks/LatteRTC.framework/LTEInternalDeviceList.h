/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface LTEInternalDeviceList : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id changeListener;

    NSMutableArray *deviceList;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } listLock;
}

@property(copy) id changeListener;

+ (id)defaultDeviceOfType:(unsigned long)arg1;
+ (id)newDeviceList;

- (id)changeListener;
- (void)cleanup;
- (void)dealloc;
- (id)deviceList;
- (id)init;
- (void)setChangeListener:(id)arg1;

@end
