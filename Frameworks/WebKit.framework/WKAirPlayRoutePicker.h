/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, WKContentView;

@interface WKAirPlayRoutePicker : UIView <UIPopoverControllerDelegate> {
    struct RetainPtr<MPAudioVideoRoutingActionSheet> { 
        void *m_ptr; 
    } _actionSheet;
    struct RetainPtr<MPAudioVideoRoutingPopoverController> { 
        void *m_ptr; 
    } _popoverController;
    struct RetainPtr<MPAVRoutingController> { 
        void *m_ptr; 
    } _routingController;
    WKContentView *_view;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_presentAirPlayPopoverAnimated:(BOOL)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_windowDidRotate:(id)arg1;
- (void)_windowWillRotate:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)show:(BOOL)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)showAirPlayPickerIPad:(unsigned int)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)showAirPlayPickerIPhone:(unsigned int)arg1;

@end
