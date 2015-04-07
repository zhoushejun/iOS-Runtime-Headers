/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassBucketTemplate : NSObject {
    int _bucketAlignment;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bucketRect;
    PKPassFieldTemplate *_defaultFieldTemplate;
    NSMutableArray *_fieldTemplates;
    unsigned int _maxFields;
    float _minFieldPadding;
    BOOL _sitsOnStripImage;
}

@property int bucketAlignment;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bucketRect;
@property(retain) PKPassFieldTemplate * defaultFieldTemplate;
@property(retain) NSMutableArray * fieldTemplates;
@property unsigned int maxFields;
@property float minFieldPadding;
@property BOOL sitsOnStripImage;

- (void)addFieldTemplate:(id)arg1;
- (int)bucketAlignment;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bucketRect;
- (void)dealloc;
- (id)defaultFieldTemplate;
- (id)fieldTemplates;
- (unsigned int)maxFields;
- (float)minFieldPadding;
- (void)setBucketAlignment:(int)arg1;
- (void)setBucketRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDefaultFieldTemplate:(id)arg1;
- (void)setFieldTemplates:(id)arg1;
- (void)setMaxFields:(unsigned int)arg1;
- (void)setMinFieldPadding:(float)arg1;
- (void)setSitsOnStripImage:(BOOL)arg1;
- (BOOL)sitsOnStripImage;
- (id)templateForFieldAtIndex:(unsigned int)arg1;

@end
