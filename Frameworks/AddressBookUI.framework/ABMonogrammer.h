/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UIColor, UIFont, UIImage;

@interface ABMonogrammer : NSObject {
    UIColor *_backgroundColor;
    float _diameter;
    UIFont *_font;
    float _innerBorderWidth;
    UIImage *_knockoutMaskMonogram;
    int _monogrammerStyle;
    UIImage *_questionMarkMonogram;
    float _scale;
    NSString *_silhouetteImageName;
    UIImage *_silhouetteMonogram;
    UIColor *_textColor;
    BOOL _textKnockout;
    UIColor *_tintColor;
}

@property(retain) UIColor * backgroundColor;
@property float diameter;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property BOOL textKnockout;

- (void)_clearMonogramCache;
- (id)_copyMonogramWithImageData:(struct __CFData { }*)arg1;
- (id)_copyMonogramWithInitials:(id)arg1;
- (id)_copyMonogramWithKnockoutMask;
- (id)_copyMonogramWithSilhouette;
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)_initialsForPerson:(void*)arg1;
- (id)backgroundColor;
- (void)dealloc;
- (id)defaultMonogram;
- (float)diameter;
- (id)font;
- (BOOL)hasImageOrInitialsForPerson:(void*)arg1;
- (BOOL)hasMonogramForPerson:(void*)arg1;
- (id)init;
- (id)initWithStyle:(int)arg1 diameter:(float)arg2;
- (float)innerBorderWidth;
- (id)knockoutMaskMonogram;
- (id)maskForMonogram;
- (id)monogramForPerson:(void*)arg1;
- (id)monogramForPerson:(void*)arg1 isPersonImage:(BOOL*)arg2;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)monogramsAsFlatImages;
- (void)monogramsForStark;
- (void)monogramsWithTint:(id)arg1;
- (id)questionMarkMonogram;
- (void)setBackgroundColor:(id)arg1;
- (void)setDiameter:(float)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextKnockout:(BOOL)arg1;
- (id)silhouetteImageName;
- (id)silhouetteMonogram;
- (id)textColor;
- (BOOL)textKnockout;

@end
