/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface _WKWebsiteDataStore : NSObject <WKObject> {
    struct ObjectStorage<API::Session> { 
        struct type { 
            unsigned char __lx[16]; 
        } data; 
    } _session;
}

@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=isNonPersistent,readonly) BOOL nonPersistent;
@property(readonly) Class superclass;

+ (id)defaultDataStore;
+ (id)nonPersistentDataStore;

- (id).cxx_construct;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (BOOL)isNonPersistent;

@end
