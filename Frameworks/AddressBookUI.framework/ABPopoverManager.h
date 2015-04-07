/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPopoverRepresentDelegate>, NSString, UIActionSheet, UIBarButtonItem, UIPopoverController, UIResponder, UIView, UIWindow;

@interface ABPopoverManager : NSObject <UIActionSheetDelegate, UIPopoverControllerDelegate> {
    UIActionSheet *_autorotateActionSheet;
    UIBarButtonItem *_autorotateBarButtonItem;
    unsigned int _autorotateDirections;
    UIPopoverController *_autorotatePopoverController;
    UIResponder *_autorotateResponder;
    UIView *_autorotateView;
    id _realDelegate;
    <ABPopoverRepresentDelegate> *_representDelegate;
    BOOL _rotating;
}

@property(retain) UIActionSheet * autorotateActionSheet;
@property(retain) UIBarButtonItem * autorotateBarButtonItem;
@property unsigned int autorotateDirrections;
@property(retain) UIPopoverController * autorotatePopoverController;
@property(retain) UIResponder * autorotateResponder;
@property(retain) UIView * autorotateView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) UIWindow * observedWindow;
@property(retain) id realDelegate;
@property(retain) <ABPopoverRepresentDelegate> * representDelegate;
@property(readonly) Class superclass;

+ (void)actionSheet:(id)arg1 dismissWithClickedButtonIndex:(int)arg2 animated:(BOOL)arg3;
+ (void)actionSheet:(id)arg1 showFromBarButtonItem:(id)arg2 animated:(BOOL)arg3;
+ (void)actionSheet:(id)arg1 showFromBarButtonItem:(id)arg2 animated:(BOOL)arg3 autorotate:(BOOL)arg4;
+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 animated:(BOOL)arg4;
+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 animated:(BOOL)arg4 direction:(unsigned int)arg5 autorotate:(BOOL)arg6;
+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 direction:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)actionSheet:(id)arg1 showFromView:(id)arg2 animated:(BOOL)arg3 autorotate:(BOOL)arg4;
+ (void)actionSheet:(id)arg1 showFromView:(id)arg2 animated:(BOOL)arg3 direction:(unsigned int)arg4 autorotate:(BOOL)arg5;
+ (void)dismissPopoverForActionSheet:(id)arg1;
+ (id)managerForPresenter:(id)arg1;
+ (void)popoverController:(id)arg1 dismissPopoverAnimated:(BOOL)arg2;
+ (void)popoverController:(id)arg1 presentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 permittedArrowDirections:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)popoverController:(id)arg1 presentPopoverFromView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4 representDelegate:(id)arg5;
+ (void)removeManagerForPresenter:(id)arg1;
+ (BOOL)resignFirstResponderIfNeeded;
+ (void)stopAutorotatePresenter:(id)arg1;

- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)autorotateActionSheet;
- (id)autorotateBarButtonItem;
- (unsigned int)autorotateDirrections;
- (id)autorotatePopoverController;
- (id)autorotateResponder;
- (id)autorotateView;
- (BOOL)autorotates;
- (void)dealloc;
- (id)delegateOwner;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)observedWindow;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)realDelegate;
- (id)representDelegate;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)revertDelegate;
- (void)setAutorotateActionSheet:(id)arg1;
- (void)setAutorotateBarButtonItem:(id)arg1;
- (void)setAutorotateDirrections:(unsigned int)arg1;
- (void)setAutorotatePopoverController:(id)arg1;
- (void)setAutorotateResponder:(id)arg1;
- (void)setAutorotateView:(id)arg1;
- (void)setRealDelegate:(id)arg1;
- (void)setRepresentDelegate:(id)arg1;
- (void)startAutorotateActionSheet:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)startAutorotateActionSheet:(id)arg1 fromView:(id)arg2;
- (void)startAutorotatePopoverController:(id)arg1 showFromView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 representDelegate:(id)arg4;
- (void)startObservingRotationOfWindow:(id)arg1;
- (void)stopAutorotate;
- (void)stopObservingRotation;
- (void)windowDidRotate:(id)arg1;
- (void)windowWillRotate:(id)arg1;

@end
