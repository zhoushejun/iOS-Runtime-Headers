/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDInfoGeometry : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    float mAngle;
    struct { 
        unsigned int widthValid : 1; 
        unsigned int heightValid : 1; 
        unsigned int horizontalFlip : 1; 
        unsigned int verticalFlip : 1; 
    } mFlags;
    struct CGPoint { 
        float x; 
        float y; 
    } mPosition;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
}

@property(readonly) float angle;
@property(readonly) BOOL heightValid;
@property(readonly) BOOL horizontalFlip;
@property(readonly) struct CGPoint { float x1; float x2; } position;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) BOOL verticalFlip;
@property(readonly) BOOL widthValid;

+ (id)geometryFromFullTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (id)geometryFromFullTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3;
+ (id)geometryFromTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 withSize:(struct CGSize { float x1; float x2; })arg2;

- (float)angle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsBeforeRotation;
- (struct CGPoint { float x1; float x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })fullTransform;
- (id)geometryByAppendingTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)geometryRelativeToGeometry:(id)arg1;
- (id)geometryWithNewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)geometryWithParentGeometry:(id)arg1;
- (unsigned int)hash;
- (BOOL)heightValid;
- (BOOL)horizontalFlip;
- (id)init;
- (id)initWithArchive:(const struct GeometryArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Point {} *x3; struct Size {} *x4; unsigned int x5; float x6; int x7; unsigned int x8[1]; }*)arg1;
- (id)initWithCenter:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithFullTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3;
- (id)initWithHeight:(float)arg1;
- (id)initWithLayoutGeometry:(id)arg1;
- (id)initWithPosition:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithPosition:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2 angle:(float)arg3;
- (id)initWithPosition:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2 widthValid:(BOOL)arg3 heightValid:(BOOL)arg4 horizontalFlip:(BOOL)arg5 verticalFlip:(BOOL)arg6 angle:(float)arg7;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2 angle:(float)arg3;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2 horizontalFlip:(BOOL)arg3 verticalFlip:(BOOL)arg4 angle:(float)arg5;
- (id)initWithWidth:(float)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualExceptForPosition:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)normalizedGeometry;
- (struct CGPoint { float x1; float x2; })position;
- (void)saveToArchive:(struct GeometryArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Point {} *x3; struct Size {} *x4; unsigned int x5; float x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (struct CGSize { float x1; float x2; })size;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformBasedOnPoint:(struct CGPoint { float x1; float x2; })arg1 centeredAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformBasedOnPoint:(struct CGPoint { float x1; float x2; })arg1 centeredAtPoint:(struct CGPoint { float x1; float x2; })arg2 withFlips:(BOOL)arg3;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformBasedOnRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformWithoutFlips;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformedBounds;
- (struct CGPoint { float x1; float x2; })transformedBoundsOrigin;
- (BOOL)verticalFlip;
- (BOOL)widthValid;

@end
