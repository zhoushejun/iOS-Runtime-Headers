/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface WKWebProcessPlugInPageGroup : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPageGroupProxy> { 
        struct type { 
            unsigned char __lx[52]; 
        } data; 
    } _bundlePageGroup;
}

@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSString * identifier;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id)identifier;

@end
