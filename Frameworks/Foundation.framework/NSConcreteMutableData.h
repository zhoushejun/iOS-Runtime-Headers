/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMutableData : NSMutableData {
    void *_bytes;
    unsigned int _capacity;
    unsigned int _hasVM : 1;
    unsigned int _length;
    unsigned int _needToZero : 1;
    unsigned int _reserved : 1;
    unsigned int _retainCount : 29;
}

- (void)_freeBytes;
- (void)appendBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)appendData:(id)arg1;
- (const void*)bytes;
- (void)dealloc;
- (void)finalize;
- (void)increaseLengthBy:(unsigned int)arg1;
- (id)init;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id)arg4;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithLength:(unsigned int)arg1;
- (unsigned int)length;
- (void*)mutableBytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withBytes:(const void*)arg2;
- (void)resetBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setLength:(unsigned int)arg1;

@end
