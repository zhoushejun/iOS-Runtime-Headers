/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFConditionLock, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MFGenericAttachmentStore : MFWebAttachmentSource {
    struct __CFDictionary { } *_attachmentSizes;
    NSMutableArray *_attachmentsOrder;
    BOOL _didCancelImageScalingOperations;
    BOOL _isScalingEnabled;
    BOOL _isScalingThrottled;
    BOOL _outgoing;
    int _pendingImageScalingOperations;
    NSObject<OS_dispatch_queue> *_scalingQueue;
    MFConditionLock *_scalingThrottle;
    unsigned int _size;
}

@property(readonly) NSArray * attachments;
@property BOOL scalingThrottled;

+ (void)addAttachmentUniqueIdentifierStore:(id)arg1;
+ (void)beginPreventingInlinePDFs;
+ (void)endPreventingInlinePDFs;
+ (BOOL)isPreventingInlinePDFs;

- (void)_decrementPendingImageScalingOperations;
- (void)_enqueueScaleAttachment:(id)arg1 withFlags:(unsigned int)arg2 originalSize:(unsigned int)arg3;
- (void)_inrementPendingImageScalingOperations;
- (void)_notifyAttachmentCachedSizesChanged;
- (BOOL)addAttachment:(id)arg1;
- (BOOL)addAttachment:(id)arg1 allowingOverride:(id)arg2;
- (id)attachments;
- (void)cancelImageScalingOperations;
- (void)dealloc;
- (id)description;
- (BOOL)didCancelImageScalingOperations;
- (BOOL)hasPendingImageScalingOperations;
- (id)initOutgoing;
- (void)removeAttachmentForURL:(id)arg1;
- (void)removeAttachmentsForURLs:(id)arg1;
- (BOOL)scalingThrottled;
- (BOOL)setAttachment:(id)arg1 forURL:(id)arg2;
- (void)setScalingThrottled:(BOOL)arg1;
- (unsigned long)sizeForScale:(unsigned int)arg1 imagesOnly:(BOOL)arg2;

@end
