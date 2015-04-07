/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIColor;

@interface SUShadow : NSObject <NSCoding, NSCopying> {
    UIColor *_color;
    struct CGSize { 
        float width; 
        float height; 
    } _offset;
    float _opacity;
    float _radius;
}

@property(retain) UIColor * color;
@property struct CGSize { float x1; float x2; } offset;
@property float opacity;
@property float radius;

- (void)applyToLayer:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { float x1; float x2; })offset;
- (float)opacity;
- (float)radius;
- (void)setColor:(id)arg1;
- (void)setOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setOpacity:(float)arg1;
- (void)setRadius:(float)arg1;

@end
