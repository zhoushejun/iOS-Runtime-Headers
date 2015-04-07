/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class MFPBrush, MFPCustomLineCap;

@interface MFPPen : NSObject {
    int mAlignment;
    MFPBrush *mBrush;
    float *mCompoundArray;
    int mCompoundArrayCount;
    MFPCustomLineCap *mCustomEndCap;
    MFPCustomLineCap *mCustomStartCap;
    int mDashCap;
    float mDashOffset;
    float *mDashPattern;
    int mDashPatternCount;
    int mDashStyle;
    int mEndCap;
    int mLineJoin;
    float mMiterLimit;
    int mStartCap;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mTransform;
    float mWidth;
}

- (id).cxx_construct;
- (int)alignment;
- (void)applyDashCapToPath:(id)arg1;
- (void)applyDashPatternToPath:(id)arg1;
- (void)applyLineCapToPath:(id)arg1;
- (void)applyLineJoinToPath:(id)arg1;
- (id)brush;
- (const float*)compoundArray;
- (int)compoundArrayCount;
- (id)customEndCap;
- (id)customStartCap;
- (int)dashCap;
- (float)dashOffset;
- (const float*)dashPattern;
- (int)dashPatternCount;
- (int)dashStyle;
- (void)dealloc;
- (int)endCap;
- (id)init;
- (int)lineJoin;
- (float)miterLimit;
- (void)setAlignment:(int)arg1;
- (void)setBrush:(id)arg1;
- (void)setCompoundArray:(const float*)arg1 count:(int)arg2;
- (void)setCustomEndCap:(id)arg1;
- (void)setCustomStartCap:(id)arg1;
- (void)setDashCap:(int)arg1;
- (void)setDashOffset:(float)arg1;
- (void)setDashPattern:(const float*)arg1 count:(int)arg2;
- (void)setDashPattern:(const float*)arg1 count:(int)arg2 toPath:(id)arg3;
- (void)setDashStyle:(int)arg1;
- (void)setEndCap:(int)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setStartCap:(int)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWidth:(float)arg1;
- (int)startCap;
- (void)strokePath:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (float)width;

@end
