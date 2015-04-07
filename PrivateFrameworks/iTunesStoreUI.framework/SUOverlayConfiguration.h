/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject {
    NSRegularExpression *_bagKeyPattern;
    int _cornerRadius;
    BOOL _shouldShowNavigationBar;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    NSString *_transitionName;
    NSRegularExpression *_urlPattern;
}

@property(readonly) int cornerRadius;
@property(readonly) BOOL shouldShowNavigationBar;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) NSString * transitionName;

- (int)cornerRadius;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (BOOL)matchesURL:(id)arg1;
- (BOOL)matchesURLBagKey:(id)arg1;
- (BOOL)shouldShowNavigationBar;
- (struct CGSize { float x1; float x2; })size;
- (id)transitionName;

@end
