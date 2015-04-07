/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AARequest, AAResponse, NSHTTPURLResponse, NSMutableData, NSObject<OS_dispatch_queue>, NSURLConnection;

@interface AARequester : NSOperation {
    BOOL _canceled;
    NSMutableData *_data;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSHTTPURLResponse *_httpResponse;
    BOOL _isCanceled;
    BOOL _isExecuting;
    BOOL _isFinished;
    AARequest *_request;
    AAResponse *_response;
    Class _responseClass;
    NSURLConnection *_urlConnection;
}

@property(getter=isCanceled) BOOL canceled;
@property(getter=isFinished) BOOL finished;
@property(retain) NSObject<OS_dispatch_queue> * handlerQueue;
@property(getter=isExecuting) BOOL isExecuting;

- (void).cxx_destruct;
- (void)_callHandler;
- (void)cancel;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)handlerQueue;
- (id)initWithRequest:(id)arg1 handler:(id)arg2;
- (BOOL)isCanceled;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)setCanceled:(BOOL)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setIsExecuting:(BOOL)arg1;
- (void)start;

@end
