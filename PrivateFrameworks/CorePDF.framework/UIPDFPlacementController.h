/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject {
    NSMutableArray *_popups;
    struct CGSize { 
        float width; 
        float height; 
    } _viewSize;
    UIPDFPageView *pageView;
}

@property UIPDFPageView * pageView;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForObjectAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithAnnotations:(id)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2;
- (void)layoutViews:(float)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (void)shift:(float)arg1;
- (id)viewAtIndex:(unsigned int)arg1;
- (float)yForObjectAtIndex:(unsigned int)arg1;

@end
