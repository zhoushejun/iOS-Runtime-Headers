/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIViewController;

@interface UIViewControllerAction : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    float _curlUpRevealedHeight;
    NSString *_name;
    int _transition;
    UIViewController *_viewController;
}

@property(setter=_setCurlUpRevealedHeight:) float _curlUpRevealedHeight;
@property(readonly) BOOL animated;
@property(copy) id completion;
@property(retain) NSString * name;
@property int transition;
@property UIViewController * viewController;

- (float)_curlUpRevealedHeight;
- (void)_setCurlUpRevealedHeight:(float)arg1;
- (BOOL)animated;
- (id)completion;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;
- (id)name;
- (void)setCompletion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTransition:(int)arg1;
- (void)setViewController:(id)arg1;
- (int)transition;
- (id)viewController;

@end
