/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVWeakReference, NSDictionary, NSMutableData, NSMutableURLRequest, NSObject<OS_dispatch_queue>, NSURLRequest, NSURLResponse;

@interface AVAssetResourceLoadingRequestInternal : NSObject {
    NSMutableURLRequest *URLRequest;
    NSDictionary *cachedContentInformation;
    NSMutableData *cachedData;
    int cancelled;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    NSObject<OS_dispatch_queue> *dataCachingQueue;
    AVAssetResourceLoadingDataRequest *dataRequest;
    struct OpaqueFigAssetImageGenerator { } *figImageGenerator;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    int finished;
    NSURLRequest *redirect;
    NSDictionary *requestDictionary;
    NSURLResponse *response;
    int sentContentInfo;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id streamingKeyRequestCompletionHandler;

    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
}

@end
