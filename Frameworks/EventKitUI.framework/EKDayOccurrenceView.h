/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayOccurrenceContentView, EKDayOccurrenceTravelTimeView, EKDayOccurrenceView, EKEvent, NSString, UIColor, UIImageView, UIView;

@interface EKDayOccurrenceView : UIView <EKDayOccurrenceTravelTimeViewMetricsDelegate, NSCopying> {
    BOOL _allDay;
    BOOL _allDayDrawingStyle;
    float _bottomPinningProximity;
    unsigned int _bottomPinningState;
    float _cappedColorBarHeight;
    UIColor *_color;
    EKDayOccurrenceContentView *_content;
    BOOL _declined;
    id _delegate;
    BOOL _dimmed;
    BOOL _drawsResizeHandles;
    UIView *_endResizeHandle;
    UIImageView *_eventBackgroundView;
    BOOL _hideBackgroundImage;
    BOOL _hideText;
    BOOL _isSelectedCopyView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _margin;
    BOOL _needsBackgroundImageUpdate;
    BOOL _needsContentCalc;
    BOOL _needsReply;
    EKEvent *_occurrence;
    int _occurrenceBackgroundStyle;
    unsigned int _offsetContentForLandscape : 1;
    float _originalXBeforeOffset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _padding;
    UIView *_pinFadeView;
    BOOL _reduceLayoutProcessingForAnimation;
    BOOL _selected;
    EKDayOccurrenceView *_selectedCopy;
    BOOL _showsTravelTime;
    UIView *_startResizeHandle;
    BOOL _tentative;
    unsigned int _touchKeptInsideOccurrence : 1;
    UIImageView *_travelBackgroundView;
    double _travelTime;
    EKDayOccurrenceTravelTimeView *_travelTimeContentView;
    float _travelTimeSubviewHeightInPoints;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _unpinnedEventBackgroundFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _unpinnedTravelBackgroundFrame;
    float _visibleHeight;
    BOOL _visibleHeightLocked;
}

@property(getter=isAllDay) BOOL allDay;
@property BOOL allDayDrawingStyle;
@property(getter=isBirthday) BOOL birthday;
@property float bottomPinningProximity;
@property(getter=isCancelled) BOOL cancelled;
@property float cappedColorBarHeight;
@property(copy) UIColor * color;
@property(copy,readonly) NSString * debugDescription;
@property(getter=isDeclined) BOOL declined;
@property id delegate;
@property(copy,readonly) NSString * description;
@property BOOL dimmed;
@property BOOL drawsResizeHandles;
@property(getter=isFacebook) BOOL facebook;
@property(readonly) unsigned int hash;
@property BOOL hideBackgroundImage;
@property BOOL hideText;
@property BOOL isSelectedCopyView;
@property(copy) NSString * location;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } margin;
@property BOOL needsReply;
@property(retain) EKEvent * occurrence;
@property int occurrenceBackgroundStyle;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } padding;
@property BOOL reduceLayoutProcessingForAnimation;
@property int routingMode;
@property(retain) UIColor * secondaryTextColor;
@property BOOL selected;
@property EKDayOccurrenceView * selectedCopy;
@property BOOL showsTravelTime;
@property(readonly) Class superclass;
@property(getter=isTentative) BOOL tentative;
@property(retain) UIColor * textBackgroundColor;
@property(retain) UIColor * timeTextColor;
@property(copy) NSString * title;
@property(retain) UIColor * titleTextColor;
@property double travelTime;
@property float travelTimeSubviewHeightInPoints;
@property BOOL usesSmallText;
@property(readonly) BOOL visibleHeightLocked;

+ (id)_adjustedOccurrenceColorForDarkBackground:(id)arg1 opaque:(BOOL)arg2;
+ (id)_adjustedStripeColorForDarkBackground:(id)arg1;
+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(BOOL)arg2 declined:(BOOL)arg3 cancelled:(BOOL)arg4 tentative:(BOOL)arg5 needsReply:(BOOL)arg6 colorBarStyle:(int)arg7 dayViewBackgroundStyle:(int)arg8;
+ (void)_clearViewCache;
+ (id)_color:(id)arg1 lightenedToPercentage:(float)arg2 withFinalAlpha:(float)arg3;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(int)arg3;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(float)arg4 colorBarStyle:(int)arg5;
+ (id)_lightColorForColor:(id)arg1 opaque:(BOOL)arg2;
+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_viewCache;
+ (float)barToBarGapWidth;
+ (float)barToBarHorizontalDistanceIncludingBarWidth;
+ (float)bottomShadowMargin;
+ (void)clearCaches;
+ (float)colorBarThickness;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStretchRectForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })defaultMargin;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })defaultPadding;
+ (float)minimumHeightForOrientation:(int)arg1;
+ (float)minimumHeightForOrientation:(int)arg1 isAllDay:(BOOL)arg2;
+ (float)minimumHeightForOrientation:(int)arg1 isAllDay:(BOOL)arg2 usesSmallText:(BOOL)arg3;
+ (id)occurrenceViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (void)_addTravelTimeSubviews;
- (id)_backgroundColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_computeContentRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_computeTravelTimeContentRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameMutatedForProximityToHourLine:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_invalidateContentBounds;
- (BOOL)_isTimedOccurrenceDrawingStyle;
- (id)_newResizeHandleView;
- (void)_removeTravelTimeSubviews;
- (void)_resetContentViewPosition;
- (BOOL)_shouldShowTimeString;
- (id)_timedEventBackgroundColor;
- (void)_updateColors;
- (void)_updateResizeHandleLocations;
- (float)_verticalContentInset;
- (BOOL)allDayDrawingStyle;
- (void)animateToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isAllDay:(BOOL)arg2 beginFromCurrentState:(BOOL)arg3 whenFinished:(id)arg4;
- (id)arrayOfResizeHandles;
- (float)bottomPinningProximity;
- (void)bringResizeHandlesToFront;
- (float)cappedColorBarHeight;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToSuperview;
- (BOOL)dimmed;
- (int)dragTypeFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)drawsResizeHandles;
- (float)enoughHeightForOneLine;
- (void)fadeInContentViewAt:(float)arg1 minWidth:(float)arg2 animated:(BOOL)arg3;
- (BOOL)hasIcon;
- (BOOL)hideBackgroundImage;
- (BOOL)hideText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateTravelTimeHeight;
- (BOOL)isAllDay;
- (BOOL)isBirthday;
- (BOOL)isCancelled;
- (BOOL)isDeclined;
- (BOOL)isFacebook;
- (BOOL)isSelectedCopyView;
- (BOOL)isTentative;
- (void)layoutSubviews;
- (id)location;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })margin;
- (BOOL)needsReply;
- (id)occurrence;
- (int)occurrenceBackgroundStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })padding;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (BOOL)reduceLayoutProcessingForAnimation;
- (void)removeFromSuperview;
- (BOOL)resetContentViewToOriginalState:(BOOL)arg1;
- (int)routingMode;
- (id)secondaryTextColor;
- (BOOL)selected;
- (id)selectedCopy;
- (void)setAllDay:(BOOL)arg1;
- (void)setAllDayDrawingStyle:(BOOL)arg1;
- (void)setAllDayDrawingStyle:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBirthday:(BOOL)arg1;
- (void)setBottomPinningProximity:(float)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setCappedColorBarHeight:(float)arg1;
- (void)setColor:(id)arg1;
- (void)setDeclined:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setDrawsResizeHandles:(BOOL)arg1;
- (void)setFacebook:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHideBackgroundImage:(BOOL)arg1;
- (void)setHideText:(BOOL)arg1;
- (void)setHideText:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setIsSelectedCopyView:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setMargin:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setNeedsReply:(BOOL)arg1;
- (void)setOccurrence:(id)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setReduceLayoutProcessingForAnimation:(BOOL)arg1;
- (void)setRoutingMode:(int)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelectedCopy:(id)arg1;
- (void)setShowsTravelTime:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeSubviewHeightInPoints:(float)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (void)setVisibleHeight:(float)arg1;
- (BOOL)showsTravelTime;
- (id)textBackgroundColor;
- (id)time;
- (id)timeTextColor;
- (id)title;
- (id)titleTextColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)travelTime;
- (float)travelTimeSubviewHeightInPoints;
- (float)unconstrainedWidth;
- (BOOL)usesSmallText;
- (float)viewMaxNaturalTextHeight;
- (BOOL)visibleHeightLocked;

@end
