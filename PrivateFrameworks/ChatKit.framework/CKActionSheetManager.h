/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIActionSheet;

@interface CKActionSheetManager : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    BOOL _dismissingActionSheetForRotation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    BOOL _performBeforeAnimation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _presenter;

}

@property(retain) UIActionSheet * actionSheet;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id handler;
@property(readonly) unsigned int hash;
@property BOOL performBeforeAnimation;
@property(copy) id presenter;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (id)actionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)didFinishRotating;
- (void)dismissActionSheet:(id)arg1 withButtonIndex:(int)arg2;
- (void)dismissCurrentActionSheet;
- (id)handler;
- (id)init;
- (BOOL)performBeforeAnimation;
- (id)presenter;
- (void)setActionSheet:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setPerformBeforeAnimation:(BOOL)arg1;
- (void)setPresenter:(id)arg1;
- (void)showActionSheet:(id)arg1 withPresenter:(id)arg2 performBeforeAnimation:(BOOL)arg3 withHandler:(id)arg4;
- (void)showActionSheet:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;
- (void)willStartRotating;

@end
