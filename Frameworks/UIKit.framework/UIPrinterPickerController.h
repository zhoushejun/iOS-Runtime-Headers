/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIPrinterPickerControllerDelegate>, UIPrinter;

@interface UIPrinterPickerController : NSObject {
    unsigned int _backgroundTaskIdentifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    <UIPrinterPickerControllerDelegate> *_delegate;
    UIPrinter *_selectedPrinter;
    id _state;
}

@property <UIPrinterPickerControllerDelegate> * delegate;
@property(retain) UIPrinter * selectedPrinter;

+ (id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1;

- (BOOL)_delegateFiltersPrinters;
- (id)_init;
- (void)_printerPickerDidDismiss;
- (void)_printerPickerDidPresent;
- (void)_printerPickerWillDismiss;
- (BOOL)_setupPickerPanel:(id)arg1;
- (BOOL)_shouldShowPrinter:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissAnimated:(BOOL)arg1;
- (id)init;
- (BOOL)presentAnimated:(BOOL)arg1 completionHandler:(id)arg2;
- (BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4;
- (oneway void)release;
- (id)selectedPrinter;
- (void)setDelegate:(id)arg1;
- (void)setSelectedPrinter:(id)arg1;

@end
