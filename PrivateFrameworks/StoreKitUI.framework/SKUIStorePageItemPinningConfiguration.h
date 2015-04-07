/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageItemPinningConfiguration : NSObject {
    BOOL _hasValidPinningContentInset;
    BOOL _hasValidPinningStyle;
    BOOL _hasValidPinningTransitionStyle;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _pinningContentInset;
    int _pinningStyle;
    int _pinningTransitionStyle;
}

@property(readonly) BOOL hasValidPinningContentInset;
@property(readonly) BOOL hasValidPinningStyle;
@property(readonly) BOOL hasValidPinningTransitionStyle;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } pinningContentInset;
@property int pinningStyle;
@property int pinningTransitionStyle;

- (BOOL)hasValidPinningContentInset;
- (BOOL)hasValidPinningStyle;
- (BOOL)hasValidPinningTransitionStyle;
- (void)invalidatePinningContentInset;
- (void)invalidatePinningStyle;
- (void)invalidatePinningTransitionStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })pinningContentInset;
- (int)pinningStyle;
- (int)pinningTransitionStyle;
- (void)setPinningContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPinningStyle:(int)arg1;
- (void)setPinningTransitionStyle:(int)arg1;

@end
