/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@class CoreDAVErrorItem, NSArray, NSData, NSDictionary, NSMutableArray, NSString, NSURL;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVAddedContainer, CoreDAVLeafDataPayload, CoreDAVModifiedContainer> {
    NSDictionary *_appleAttributes;
    NSString *_bulkParsedCTag;
    NSString *_bulkParsedPTag;
    CoreDAVErrorItem *_bulkUploadErrorItem;
    NSMutableArray *_childrenOrder;
}

@property(readonly) NSDictionary * appleAttributes;
@property(retain) NSString * bulkParsedCTag;
@property(retain) NSString * bulkParsedPTag;
@property(retain) CoreDAVErrorItem * bulkUploadErrorItem;
@property(readonly) NSArray * childrenOrder;
@property(readonly) NSData * dataPayload;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL isBookmarkBarFolder;
@property BOOL isBookmarkFolder;
@property BOOL isBookmarkMenuFolder;
@property(retain) NSURL * serverID;
@property(readonly) Class superclass;
@property(readonly) NSString * syncKey;

+ (id)copyPropertyMappingsForParser;

- (id)_appleAttributesString;
- (void)_faultResourceType;
- (id)appleAttributes;
- (void)applyParsedProperties:(id)arg1;
- (id)bulkParsedCTag;
- (id)bulkParsedPTag;
- (id)bulkUploadErrorItem;
- (id)childrenOrder;
- (id)copyMkcolTask;
- (id)copyPropPatchTask;
- (id)dataPayload;
- (void)dealloc;
- (id)initWithServerID:(id)arg1 containerName:(id)arg2 appleAttributes:(id)arg3;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (BOOL)isBookmarkBarFolder;
- (BOOL)isBookmarkFolder;
- (BOOL)isBookmarkMenuFolder;
- (id)serverID;
- (void)setBulkParsedCTag:(id)arg1;
- (void)setBulkParsedPTag:(id)arg1;
- (void)setBulkUploadErrorItem:(id)arg1;
- (void)setIsBookmarkBarFolder:(BOOL)arg1;
- (void)setIsBookmarkFolder:(BOOL)arg1;
- (void)setIsBookmarkMenuFolder:(BOOL)arg1;
- (void)setServerID:(id)arg1;
- (id)syncKey;

@end
