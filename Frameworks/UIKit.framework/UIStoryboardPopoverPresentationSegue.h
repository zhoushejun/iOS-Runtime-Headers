/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIBarButtonItem, UIView;

@interface UIStoryboardPopoverPresentationSegue : UIStoryboardSegue <UIPopoverPresentationControllerDelegate> {
    UIBarButtonItem *_anchorBarButtonItem;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _anchorRect;
    UIView *_anchorView;
    NSArray *_passthroughViews;
    unsigned int _permittedArrowDirections;
}

@property(retain) UIBarButtonItem * anchorBarButtonItem;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } anchorRect;
@property(retain) UIView * anchorView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSArray * passthroughViews;
@property unsigned int permittedArrowDirections;
@property(readonly) Class superclass;

- (void)_prepare;
- (id)anchorBarButtonItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })anchorRect;
- (id)anchorView;
- (void)dealloc;
- (id)passthroughViews;
- (void)perform;
- (unsigned int)permittedArrowDirections;
- (void)setAnchorBarButtonItem:(id)arg1;
- (void)setAnchorRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAnchorView:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned int)arg1;

@end
