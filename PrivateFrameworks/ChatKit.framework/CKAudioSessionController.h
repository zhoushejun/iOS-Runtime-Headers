/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioSessionController : NSObject {
    BOOL _active;
    BOOL _dirty;
    BOOL _shouldUseSpeaker;
}

@property(getter=isActive) BOOL active;
@property(getter=isDirty) BOOL dirty;
@property BOOL shouldUseSpeaker;

+ (id)queue;
+ (id)shareInstance;

- (void)activateUsingSpeaker:(BOOL)arg1 completion:(id)arg2;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)configureAudioSession:(BOOL)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (BOOL)isActive;
- (BOOL)isDirty;
- (void)setActive:(BOOL)arg1;
- (void)setActive:(BOOL)arg1 shouldUseSpeaker:(BOOL)arg2 completion:(id)arg3;
- (void)setDirty:(BOOL)arg1;
- (void)setShouldUseSpeaker:(BOOL)arg1;
- (BOOL)shouldUseSpeaker;

@end
