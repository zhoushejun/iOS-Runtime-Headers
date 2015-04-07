/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIBezierPath;

@interface MPAlternateTrackCellBackgroundView : UIView {
    UIBezierPath *_fillPath;
    int _sectionLocation;
    UIBezierPath *_strokePath;
}

@property int sectionLocation;

- (void).cxx_destruct;
- (void)_createBezierPathWithCornerRadius:(float)arg1 bottomRadius:(float)arg2 animating:(BOOL)arg3;
- (void)_invalidatePaths;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)sectionLocation;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;

@end
