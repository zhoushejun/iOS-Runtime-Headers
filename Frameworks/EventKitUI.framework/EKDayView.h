/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayViewDataSource>, <EKDayViewDelegate>, EKDayAllDayView, EKDayTimeView, EKDayViewContent, EKDayViewSpringLoadedScrollAnimation, EKEvent, NSArray, NSCalendar, NSDate, NSDateComponents, NSString, NSTimer, UIColor, UIImageView, UIPinchGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;

@interface EKDayView : UIView <EKDayAllDayViewDelegate, EKDayTimeViewDelegate, EKDayViewContentDelegate, UIScrollViewDelegate> {
    BOOL _alignsMidnightToTop;
    EKDayAllDayView *_allDayView;
    BOOL _allowPinchingHourHeights;
    BOOL _allowsOccurrenceSelection;
    UIView *_bottomLine;
    UIImageView *_bottomVerticalGridExtension;
    NSCalendar *_calendar;
    <EKDayViewDataSource> *_dataSource;
    EKDayViewContent *_dayContent;
    double _dayEnd;
    double _dayStart;
    <EKDayViewDelegate> *_delegate;
    NSDateComponents *_displayDate;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    NSArray *_existingTimedOcurrences;
    float _hourScale;
    NSDate *_lastInspectedOccurrenceOnDate;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastPinchDistance;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastPinchPoint1;
    double _nextDSTTransition;
    int _orientation;
    int _outlineStyle;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    BOOL _pinching;
    EKDayViewSpringLoadedScrollAnimation *_scrollAnimation;
    BOOL _scrollToOccurrencesOnNextReload;
    BOOL _scrollbarShowsInside;
    struct CGSize { 
        float width; 
        float height; 
    } _scrolledToFirstVisibleSecondForSize;
    UIScrollView *_scroller;
    BOOL _scrollingToOccurrence;
    BOOL _settingDate;
    BOOL _shouldEverShowTimeIndicators;
    NSTimer *_timeMarkerTimer;
    EKDayTimeView *_timeView;
    UIImageView *_topVerticalGridExtension;
    BOOL _userScrolling;
    BOOL _usesVibrantGridDrawing;
}

@property BOOL alignsMidnightToTop;
@property(readonly) EKDayAllDayView * allDayView;
@property BOOL allowPinchingHourHeights;
@property BOOL allowsOccurrenceSelection;
@property BOOL allowsScrolling;
@property BOOL animatesTimeMarker;
@property(copy) NSCalendar * calendar;
@property <EKDayViewDataSource> * dataSource;
@property(readonly) double dayEnd;
@property(readonly) double dayStart;
@property(copy,readonly) NSString * debugDescription;
@property <EKDayViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) EKEvent * dimmedOccurrence;
@property(copy) NSDateComponents * displayDate;
@property BOOL eventsFillGrid;
@property int firstVisibleSecond;
@property(retain) UIColor * gridLineColor;
@property(readonly) unsigned int hash;
@property float hourScale;
@property struct _NSRange { unsigned int x1; unsigned int x2; } hoursToRender;
@property(readonly) float leftContentInset;
@property struct CGPoint { float x1; float x2; } normalizedContentOffset;
@property int occurrenceBackgroundStyle;
@property(retain) UIColor * occurrenceLocationColor;
@property(retain) UIColor * occurrenceTextBackgroundColor;
@property(retain) UIColor * occurrenceTimeColor;
@property(retain) UIColor * occurrenceTitleColor;
@property(readonly) NSArray * occurrenceViews;
@property int outlineStyle;
@property(readonly) float scrollBarOffset;
@property(readonly) float scrollOffset;
@property BOOL shouldEverShowTimeIndicators;
@property BOOL showsLeftBorder;
@property BOOL showsTimeLabel;
@property BOOL showsTimeLine;
@property BOOL showsTimeMarker;
@property(readonly) Class superclass;
@property(retain) UIColor * timeViewTextColor;
@property BOOL usesVibrantGridDrawing;

- (void).cxx_destruct;
- (void)_adjustForDateOrCalendarChange;
- (double)_adjustSecondBackwardForDSTHole:(double)arg1;
- (double)_adjustSecondForwardForDSTHole:(double)arg1;
- (void)_clearVerticalGridExtensionImageCache;
- (void)_createAllDayView;
- (void)_dayViewPinched:(id)arg1;
- (void)_disposeAllDayView;
- (void)_doubleTap:(id)arg1;
- (void)_finishedScrollToSecond;
- (id)_generateVerticalGridExtensionImage;
- (void)_invalidateMarkerTimer;
- (void)_localeChanged;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (struct CGPoint { float x1; float x2; })_pinchDistanceForGestureRecognizer:(id)arg1;
- (float)_positionOfSecond:(int)arg1;
- (void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 whenFinished:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_scrollerRect;
- (int)_secondAtPosition:(float)arg1;
- (BOOL)_showingAllDaySection;
- (void)_startMarkerTimer;
- (void)_stopScrolling;
- (void)_timeViewTapped:(id)arg1;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (float)_verticalOffset;
- (void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2;
- (void)adjustForSignificantTimeChange;
- (void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1;
- (BOOL)alignsMidnightToTop;
- (float)allDayRegionHeight;
- (id)allDayView;
- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)allDayViewDidLayoutSubviews:(id)arg1;
- (BOOL)allowPinchingHourHeights;
- (BOOL)allowsOccurrenceSelection;
- (BOOL)allowsScrolling;
- (BOOL)animatesTimeMarker;
- (void)bringEventToFront:(id)arg1;
- (id)calendar;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (BOOL)containsOccurrences;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentTimeRectInView:(id)arg1;
- (id)dataSource;
- (double)dateAtPoint:(struct CGPoint { float x1; float x2; })arg1 isAllDay:(BOOL*)arg2;
- (double)dateAtPoint:(struct CGPoint { float x1; float x2; })arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3;
- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)dayContentView:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (double)dayEnd;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (double)dayStart;
- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dimmedOccurrence;
- (id)displayDate;
- (BOOL)eventOccursOnThisDay:(id)arg1;
- (BOOL)eventsFillGrid;
- (int)firstVisibleSecond;
- (void)firstVisibleSecondChanged;
- (id)gridLineColor;
- (void)highlightHour:(double)arg1;
- (double)highlightedHour;
- (float)hourScale;
- (struct _NSRange { unsigned int x1; unsigned int x2; })hoursToRender;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 scrollbarShowsInside:(BOOL)arg6;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (BOOL)isAllDayLabelHighlighted;
- (void)layoutSubviews;
- (float)leftContentInset;
- (float)maximumHourScale;
- (float)minimumHourScale;
- (struct CGPoint { float x1; float x2; })normalizedContentOffset;
- (int)occurrenceBackgroundStyle;
- (id)occurrenceLocationColor;
- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;
- (id)occurrenceTextBackgroundColor;
- (id)occurrenceTimeColor;
- (id)occurrenceTitleColor;
- (id)occurrenceViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViews;
- (int)outlineStyle;
- (struct CGPoint { float x1; float x2; })pointAtDate:(double)arg1 isAllDay:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForEvent:(id)arg1;
- (void)relayoutExistingTimedOccurrences;
- (void)reloadData;
- (void)removeFromSuperview;
- (void)resetLastSelectedOccurrencePoint;
- (float)scrollBarOffset;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (float)scrollOffset;
- (void)scrollToDate:(id)arg1 animated:(BOOL)arg2 whenFinished:(id)arg3;
- (void)scrollToEvent:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (BOOL)scrollTowardPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAlignsMidnightToTop:(BOOL)arg1;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (void)setAllowPinchingHourHeights:(BOOL)arg1;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setAllowsScrolling:(BOOL)arg1;
- (void)setAnimatesTimeMarker:(BOOL)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setEventsFillGrid:(BOOL)arg1;
- (void)setFirstVisibleSecond:(int)arg1;
- (void)setGridLineColor:(id)arg1;
- (void)setHourScale:(float)arg1;
- (void)setHoursToRender:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setNormalizedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setOccurrenceLocationColor:(id)arg1;
- (void)setOccurrenceTextBackgroundColor:(id)arg1;
- (void)setOccurrenceTimeColor:(id)arg1;
- (void)setOccurrenceTitleColor:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutlineStyle:(int)arg1;
- (void)setScrollerYInset:(float)arg1 keepingYPointVisible:(float)arg2;
- (void)setShouldEverShowTimeIndicators:(BOOL)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (void)setShowsTimeLabel:(BOOL)arg1;
- (void)setShowsTimeLine:(BOOL)arg1;
- (void)setShowsTimeMarker:(BOOL)arg1;
- (void)setTimeViewTextColor:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUsesVibrantGridDrawing:(BOOL)arg1;
- (BOOL)shouldEverShowTimeIndicators;
- (BOOL)showsLeftBorder;
- (BOOL)showsTimeLabel;
- (BOOL)showsTimeLine;
- (BOOL)showsTimeMarker;
- (id)timeViewTextColor;
- (void)updateMarkerPosition;
- (BOOL)usesVibrantGridDrawing;
- (void)willMoveToSuperview:(id)arg1;
- (float)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1;

@end
