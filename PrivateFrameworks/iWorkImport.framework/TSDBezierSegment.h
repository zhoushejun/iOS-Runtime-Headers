/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBezierSegment : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    } mA;
    struct CGPoint { 
        float x; 
        float y; 
    } mB;
    struct CGPoint { 
        float x; 
        float y; 
    } mIn;
    struct CGPoint { 
        float x; 
        float y; 
    } mOut;
}

@property(readonly) BOOL bogusSegment;
@property(readonly) struct CGPoint { float x1; float x2; } fromPoint;
@property(readonly) struct CGPoint { float x1; float x2; } inPoint;
@property(readonly) struct CGPoint { float x1; float x2; } outPoint;
@property(readonly) struct CGPoint { float x1; float x2; } toPoint;

+ (id)segmentFromPoint:(struct CGPoint { float x1; float x2; })arg1 outPoint:(struct CGPoint { float x1; float x2; })arg2 inPoint:(struct CGPoint { float x1; float x2; })arg3 toPoint:(struct CGPoint { float x1; float x2; })arg4;

- (BOOL)bogusSegment;
- (struct CGPoint { float x1; float x2; })closestPointToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)description;
- (struct CGPoint { float x1; float x2; })fromPoint;
- (struct CGPoint { float x1; float x2; })inPoint;
- (id)initFromPoint:(struct CGPoint { float x1; float x2; })arg1 outPoint:(struct CGPoint { float x1; float x2; })arg2 inPoint:(struct CGPoint { float x1; float x2; })arg3 toPoint:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })outPoint;
- (float)parametricValueForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })pointAtParametricValue:(float)arg1;
- (void)splitAtParametricValue:(float)arg1 left:(id*)arg2 right:(id*)arg3;
- (struct CGPoint { float x1; float x2; })toPoint;

@end
