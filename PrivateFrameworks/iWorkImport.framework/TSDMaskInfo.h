/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing> {
    TSDPathSource *mPathSource;
}

@property(retain) TSDPathSource * pathSource;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct MaskArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct PathSourceArchive {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (id)pathSource;
- (Class)repClass;
- (void)saveToArchive:(struct MaskArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct PathSourceArchive {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setPathSource:(id)arg1;

@end
