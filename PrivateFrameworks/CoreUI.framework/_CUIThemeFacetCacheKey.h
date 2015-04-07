/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIThemeFacetCacheKey : NSObject {
    unsigned long long hashPrecalc;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } keyList[16];
    int themeIndex;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (unsigned long long)hash64;
- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 themeIndex:(int)arg2;
- (BOOL)isEqual:(id)arg1;

@end
