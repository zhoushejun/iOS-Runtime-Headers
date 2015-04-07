/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class CIFilter;

@interface BLEdgeAwareMaskFilter : CIFilter {
    CIFilter *_ciColorCubeFilter;
    float *_cubeData;
    struct { 
        unsigned char blue; 
        unsigned char green; 
        unsigned char red; 
        unsigned char alpha; 
    } _currentInputColor;
    struct { 
        unsigned char blue; 
        unsigned char green; 
        unsigned char red; 
        unsigned char alpha; 
    } _inputColor;
}

@property struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } inputColor;

- (void).cxx_destruct;
- (id)cubeData;
- (unsigned long)dataLength;
- (void)dealloc;
- (id)init;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })inputColor;
- (BOOL)isDataUpToDate;
- (void)labFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 lunminance:(float*)arg4 a:(float*)arg5 b:(float*)arg6;
- (id)outputImage;
- (void)setInputColor:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg1;
- (void)setInputImage:(id)arg1;

@end
