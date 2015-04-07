/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIImage, UIImageView, UIView;

@interface MPVideoBackgroundView : UIView {
    UIImageView *_backgroundPlaceholderImageView;
    UIView *_backgroundPlaceholderPosterImageView;
    UIView *_backgroundPlaceholderView;
    UIImageView *_customBackgroundImageView;
    NSString *_destinationName;
    int _destinationPlaceholderStyle;
    UIImageView *_iconView;
    UIView *_imageView;
    int _interfaceOrientation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _layoutSubviewsPostflightHandler;

    BOOL _showDestinationPlaceholder;
}

@property(retain) UIImage * backgroundPlaceholderImage;
@property(retain) UIView * backgroundPlaceholderPosterImageView;
@property(readonly) UIView * backgroundPlaceholderView;
@property(copy) NSString * destinationName;
@property int destinationPlaceholderStyle;
@property int interfaceOrientation;
@property(copy) id layoutSubviewsPostflightHandler;

- (void).cxx_destruct;
- (void)_createInformationalTitleView:(id*)arg1 systemFont:(id)arg2 lineBreakMode:(int)arg3;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)arg1;
- (id)backgroundPlaceholderImage;
- (id)backgroundPlaceholderPosterImageView;
- (id)backgroundPlaceholderView;
- (void)dealloc;
- (id)destinationName;
- (int)destinationPlaceholderStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (void)layoutSubviews;
- (id)layoutSubviewsPostflightHandler;
- (id)qtIcon;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (void)setBackgroundPlaceholderPosterImageView:(id)arg1;
- (void)setCustomBackgroundImage:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDestinationPlaceholderStyle:(int)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setLayoutSubviewsPostflightHandler:(id)arg1;
- (void)setShowDestinationPlaceholder:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowQTAudioOnlyUI:(BOOL)arg1;

@end
