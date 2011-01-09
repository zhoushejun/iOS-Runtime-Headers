/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLConnectionInternal;



@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender>
{
    NSURLConnectionInternal *_internal;
}

+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;
+ (BOOL)canHandleRequest:(id)arg1;
+ (void)_resourceLoadLoop:(id)arg1;
+ (NSUInteger)_sweeperInterval;
+ (void)_setSweeperInterval:(NSUInteger)arg1;
+ (struct __CFRunLoop { }*)resourceLoaderRunLoop;
+ (void)_setLoaderThreadPriority:(NSInteger)arg1;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;

- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 priority:(float)arg3 usesCache:(BOOL)arg4;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 priority:(float)arg3;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (void)start;
- (void)cancel;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (void)releaseDelegate;
- (struct _CFURLRequest { }*)sendWillSendRequest:(struct _CFURLRequest { }*)arg1 redirectResponse:(struct _CFURLResponse { }*)arg2;
- (void)sendDidReceiveResponse:(struct _CFURLResponse { }*)arg1;
- (void)sendDidReceiveData:(struct __CFData { }*)arg1 originalLength:(long)arg2;
- (void)sendDidFinishLoading;
- (void)sendDidFail:(struct __CFError { }*)arg1;
- (struct _CFCachedURLResponse { }*)sendWillCacheResponse:(struct _CFCachedURLResponse { }*)arg1;
- (void)sendDidReceiveChallenge:(struct _CFURLAuthChallenge { }*)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)sendCanAuthenticateAgainstProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
     /* Encoded args for previous method: B12@0:4^{_CFURLProtectionSpace=}8 */

- (void)sendDidSendBodyData:(long)arg1 totalBytesWritten:(long)arg2 totalBytesExpectedToWrite:(long)arg3;
- (unsigned char)sendConnectionShouldUseCredentialStorage;
- (struct __CFReadStream { }*)sendNeedNewBodyStream:(struct _CFURLRequest { }*)arg1;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3;
- (struct _CFURLConnection { }*)_CFURLConnection;
- (void)_setShouldSkipCancelOnRelease:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)_delegate;
- (BOOL)_connectionActive;
- (void)setDefersCallbacks:(BOOL)arg1;
- (BOOL)defersCallbacks;
- (void)_dontCountTowardsOriginLoadLimit;
- (void)_suspendLoading;
- (void)_resumeLoading;
- (void)cleanupChallenges;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;

@end