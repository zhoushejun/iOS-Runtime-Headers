/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMRange;

@interface UITextRangeImpl : UITextRange {
    int _affinityIfCollapsed;
    DOMRange *_domRange;
}

@property int affinity;
@property(retain) DOMRange * domRange;

+ (id)wrapDOMRange:(id)arg1;
+ (id)wrapDOMRange:(id)arg1 withAffinity:(int)arg2;

- (void)adjustAffinityOfPosition:(id)arg1 isStart:(BOOL)arg2;
- (int)affinity;
- (void)dealloc;
- (id)description;
- (id)domRange;
- (id)end;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)setAffinity:(int)arg1;
- (void)setDomRange:(id)arg1;
- (id)start;

@end
