/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPUMarqueeView, NSDictionary, NSString, UIImage, UIImageView, UILabel;

@interface MPUNowPlayingTitlesView : UIView {
    NSString *_albumText;
    NSString *_artistText;
    UILabel *_detailLabel;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _detailMarqueeEdgeInsets;
    MPUMarqueeView *_detailMarqueeView;
    NSDictionary *_detailTextAttributes;
    BOOL _explicit;
    UIImage *_explicitImage;
    UIImageView *_explicitImageView;
    BOOL _needsLabelUpdate;
    NSString *_stationNameText;
    int _style;
    float _textMargin;
    UILabel *_titleLabel;
    float _titleLeading;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _titleMarqueeEdgeInsets;
    MPUMarqueeView *_titleMarqueeView;
    NSString *_titleText;
    NSDictionary *_titleTextAttributes;
}

@property(copy) NSString * albumText;
@property(copy) NSString * artistText;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } detailMarqueeEdgeInsets;
@property(retain) NSDictionary * detailTextAttributes;
@property(getter=isExplicit) BOOL explicit;
@property(retain) UIImage * explicitImage;
@property(getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property(copy) NSString * stationNameText;
@property int style;
@property float textMargin;
@property(readonly) float titleBaselineOffsetFromBottom;
@property float titleLeading;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } titleMarqueeEdgeInsets;
@property(copy) NSString * titleText;
@property(retain) NSDictionary * titleTextAttributes;

+ (Class)labelClass;

- (void).cxx_destruct;
- (id)_detailLabel;
- (id)_detailMarqueeView;
- (id)_titleLabel;
- (id)_titleMarqueeView;
- (void)_updateAttributedTitleLabel;
- (id)albumText;
- (id)artistText;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })detailMarqueeEdgeInsets;
- (id)detailTextAttributes;
- (id)explicitImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (BOOL)isExplicit;
- (BOOL)isMarqueeEnabled;
- (void)layoutSubviews;
- (void)resetMarqueePositions;
- (void)setAlbumText:(id)arg1;
- (void)setArtistText:(id)arg1;
- (void)setDetailMarqueeEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDetailTextAttributes:(id)arg1;
- (void)setExplicit:(BOOL)arg1;
- (void)setExplicitImage:(id)arg1;
- (void)setMarqueeEnabled:(BOOL)arg1;
- (void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2;
- (void)setStationNameText:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setTextMargin:(float)arg1;
- (void)setTitleLeading:(float)arg1;
- (void)setTitleMarqueeEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)stationNameText;
- (int)style;
- (float)textMargin;
- (float)titleBaselineOffsetFromBottom;
- (float)titleLeading;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleMarqueeEdgeInsets;
- (id)titleText;
- (id)titleTextAttributes;

@end
