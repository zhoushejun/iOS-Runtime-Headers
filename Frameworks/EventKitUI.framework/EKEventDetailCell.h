/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent;

@interface EKEventDetailCell : UITableViewCell {
    BOOL _editable;
    EKEvent *_event;
    int _lastLaidOutPosition;
    float _lastLaidOutWidth;
}

@property(readonly) BOOL isEditable;

+ (id)_bodyFontAtDefaultSize;
+ (float)_scaledDistanceCalculatedFromBottomToBaseline:(float)arg1;
+ (float)_scaledDistanceCalculatedFromTopFromBaseline:(float)arg1;
+ (float)detailsBottomVerticalInset;
+ (float)detailsCellDefaultHeight;
+ (float)detailsPostLabelSpace;
+ (float)detailsTopVerticalInset;

- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(int)arg3;
- (BOOL)isEditable;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (BOOL)needsLayoutForWidth:(float)arg1 position:(int)arg2;
- (void)setEvent:(id)arg1;
- (void)sizeToFit;
- (BOOL)update;

@end
