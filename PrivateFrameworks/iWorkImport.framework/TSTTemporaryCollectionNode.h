/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSString;

@interface TSTTemporaryCollectionNode : NSObject {
    NSMutableArray *mChildren;
    struct TSCEVectorIndexPair { 
        unsigned short column; 
        unsigned short row; 
    } mDimensions;
    unsigned int mFirstIndex;
    unsigned int mLastIndex;
    NSMutableArray *mWhitespaceAfterDelimiters;
    NSString *mWhitespaceBeforeFirstChild;
}

@property(retain) NSMutableArray * children;
@property struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; } dimensions;
@property unsigned int firstIndex;
@property unsigned int lastIndex;
@property(retain) NSMutableArray * whitespaceAfterDelimiters;
@property(retain) NSString * whitespaceBeforeFirstChild;

- (id).cxx_construct;
- (id)children;
- (void)dealloc;
- (struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; })dimensions;
- (unsigned int)firstIndex;
- (id)init;
- (unsigned int)lastIndex;
- (void)setChildren:(id)arg1;
- (void)setDimensions:(struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; })arg1;
- (void)setFirstIndex:(unsigned int)arg1;
- (void)setLastIndex:(unsigned int)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (void)setWhitespaceBeforeFirstChild:(id)arg1;
- (id)whitespaceAfterDelimiters;
- (id)whitespaceBeforeFirstChild;

@end
