/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEODirectionsProvider : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishedHandler;

    BOOL _isLoading;
    int _requestType;
}

@property(copy) id errorHandler;
@property(copy) id finishedHandler;
@property BOOL isLoading;

- (void)cancelProviderRequest;
- (void)cancelRequest;
- (void)dealloc;
- (id)errorHandler;
- (id)finishedHandler;
- (BOOL)isLoading;
- (void)providerDidCancel;
- (void)providerReceivedError:(id)arg1 problemDetails:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg2;
- (void)providerReceivedErrorCode:(int)arg1 userInfo:(id)arg2 problemDetails:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg3;
- (void)providerReceivedResponse:(id)arg1;
- (void)requestCompleted;
- (void)setErrorHandler:(id)arg1;
- (void)setFinishedHandler:(id)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)startProviderWithRequest:(id)arg1;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;

@end
