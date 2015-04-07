/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface PLSyncSaveJob : NSObject {
    NSDate *_cleanupBeforeDate;
    BOOL _cleanupSyncState;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishedBlock;

    NSSet *albumURIs;
    NSDate *creationDate;
    NSArray *facesInfo;
    BOOL isSyncComplete;
    BOOL isVideo;
    CLLocation *location;
    NSDate *modificationDate;
    NSURL *originalAssetURL;
    NSString *originalFileName;
    NSNumber *sortToken;
    NSString *uuid;
}

@property(copy) NSSet * albumURIs;
@property(copy) NSDate * cleanupBeforeDate;
@property BOOL cleanupSyncState;
@property(copy) NSDate * creationDate;
@property(retain) NSArray * facesInfo;
@property(copy) id finishedBlock;
@property BOOL isSyncComplete;
@property BOOL isVideo;
@property(copy) CLLocation * location;
@property(copy) NSDate * modificationDate;
@property(retain) NSURL * originalAssetURL;
@property(retain) NSString * originalFileName;
@property(retain) NSNumber * sortToken;
@property(copy) NSString * uuid;

- (id)albumURIs;
- (id)cleanupBeforeDate;
- (BOOL)cleanupSyncState;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)facesInfo;
- (id)finishedBlock;
- (id)initFromSerializedData:(id)arg1;
- (BOOL)isSyncComplete;
- (BOOL)isVideo;
- (id)location;
- (id)modificationDate;
- (id)originalAssetURL;
- (id)originalFileName;
- (void)processFacesWithBlock:(id)arg1;
- (id)serializedData;
- (void)setAlbumURIs:(id)arg1;
- (void)setCleanupBeforeDate:(id)arg1;
- (void)setCleanupSyncState:(BOOL)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFacesInfo:(id)arg1;
- (void)setFinishedBlock:(id)arg1;
- (void)setIsSyncComplete:(BOOL)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setOriginalAssetURL:(id)arg1;
- (void)setOriginalFileName:(id)arg1;
- (void)setSortToken:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)sortToken;
- (id)uuid;

@end
