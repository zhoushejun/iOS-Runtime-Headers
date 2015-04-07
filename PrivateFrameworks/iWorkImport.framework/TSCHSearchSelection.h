/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSCHSelectionPath;

@interface TSCHSearchSelection : TSCHSelection {
    NSString *mOriginalString;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } mRange;
}

@property(copy,readonly) NSString * originalString;
@property(copy,readonly) TSCHSelectionPath * path;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;

- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 path:(id)arg2 originalString:(id)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)originalString;
- (id)path;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)searchSelectionForReplacingWithString:(id)arg1 options:(unsigned int)arg2;
- (id)stringByReplacingSelectionWithString:(id)arg1 options:(unsigned int)arg2;

@end
