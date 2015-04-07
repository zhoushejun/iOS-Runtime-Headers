/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSUTemporaryDirectory : NSObject {
    BOOL _leak;
    NSString *_path;
}

- (id)URL;
- (void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithSignature:(id)arg1;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2;
- (void)leakTemporaryDirectory;
- (id)path;

@end
