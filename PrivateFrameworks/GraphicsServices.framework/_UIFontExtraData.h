/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GraphicsServices.framework/GraphicsServices
 */

@class NSCharacterSet, NSData;

@interface _UIFontExtraData : NSObject {
    float _ascender;
    NSCharacterSet *_coveredCharacterSet;
    float _descender;
    struct __fFlags { 
        unsigned int _initialized : 1; 
        unsigned int _isSystemFont : 1; 
        unsigned int _hasKernPair : 1; 
        unsigned int _checkedLatin1Table : 1; 
        unsigned int _isIBTextStyleFont : 1; 
    } _fFlags;
    NSData *_latin1MappingTable;
    float _lineGap;
    float _lineHeight;
}

- (void)dealloc;

@end
