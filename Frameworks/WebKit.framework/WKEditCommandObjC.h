/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WKEditCommandObjC : NSObject {
    struct RefPtr<WebKit::WebEditCommandProxy> { 
        struct WebEditCommandProxy {} *m_ptr; 
    } m_command;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WebEditCommandProxy { int (**x1)(); id x2; unsigned long long x3; int x4; struct WebPageProxy {} *x5; }*)command;
- (id)initWithWebEditCommandProxy:(struct PassRefPtr<WebKit::WebEditCommandProxy> { struct WebEditCommandProxy {} *x1; })arg1;

@end
