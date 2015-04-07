/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDStroke;

@interface TSCH3DPrefilteredLineSetting : NSObject {
    BOOL mCullBackfaces;
    BOOL mDisableColorOutput;
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    } mFilterRadius;
    float mLineWidth;
    TSDStroke *mStroke;
    struct tvec4<float> { 
        union { 
            float x; 
            float r; 
            float s; 
        } ; 
        union { 
            float y; 
            float g; 
            float t; 
        } ; 
        union { 
            float z; 
            float b; 
            float p; 
        } ; 
        union { 
            float w; 
            float a; 
            float q; 
        } ; 
    } mStrokeColor;
    BOOL mUseNormals;
}

@property BOOL cullBackfaces;
@property BOOL disableColorOutput;
@property struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } filterRadius;
@property float lineWidth;
@property(copy) TSDStroke * stroke;
@property struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } strokeColor;
@property BOOL useNormals;

+ (id)setting;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)cullBackfaces;
- (void)dealloc;
- (BOOL)disableColorOutput;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })filterRadius;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (float)lineWidth;
- (void)setCullBackfaces:(BOOL)arg1;
- (void)setDisableColorOutput:(BOOL)arg1;
- (void)setFilterRadius:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setLineWidth:(float)arg1;
- (void)setStroke:(id)arg1;
- (void)setStrokeColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (void)setUseNormals:(BOOL)arg1;
- (id)stroke;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })strokeColor;
- (BOOL)useNormals;

@end
