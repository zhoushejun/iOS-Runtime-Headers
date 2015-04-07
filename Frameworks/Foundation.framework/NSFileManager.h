/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSFileManagerDelegate>, <NSObject><NSCopying><NSCoding>, NSString;

@interface NSFileManager : NSObject {
}

@property(copy,readonly) NSString * currentDirectoryPath;
@property <NSFileManagerDelegate> * delegate;
@property(copy,readonly) <NSObject><NSCopying><NSCoding> * ubiquityIdentityToken;

+ (BOOL)_storeMovePath:(id)arg1 toPath:(id)arg2;
+ (id)_web_createTemporaryFileForQuickLook:(id)arg1;
+ (id)cacheDirectoryPathWithName:(id)arg1;
+ (id)defaultManager;
+ (BOOL)ensureDirectoryExists:(id)arg1;

- (id)URLForDirectory:(unsigned int)arg1 inDomain:(unsigned int)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id*)arg5;
- (id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3;
- (id)URLForUbiquityContainerIdentifier:(id)arg1;
- (id)URLsForDirectory:(unsigned int)arg1 inDomains:(unsigned int)arg2;
- (id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2;
- (id)_URLForTrashingItemAtURL:(id)arg1 create:(BOOL)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3;
- (BOOL)_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id*)arg5;
- (BOOL)_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id*)arg5;
- (BOOL)_cutIsPathOnMissingVolume:(id)arg1;
- (id)_displayPathForPath:(id)arg1;
- (BOOL)_fileProtection:(id)arg1 isGreaterThan:(id)arg2;
- (BOOL)_fileProtection:(id)arg1 isGreaterThan:(id)arg2;
- (BOOL)_fileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 passesTest:(id)arg3;
- (BOOL)_fileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 passesTest:(id)arg3;
- (id)_generateLinkForURL:(id)arg1;
- (double)_gkExpirationIntervalOfFileAtPath:(id)arg1;
- (long)_gkReadXattrBytes:(void*)arg1 count:(unsigned long)arg2 withName:(id)arg3 path:(id)arg4;
- (void)_gkRemoveXattrNamed:(id)arg1 path:(id)arg2;
- (void)_gkSetExpirationInterval:(double)arg1 ofFileAtPath:(id)arg2;
- (void)_gkWriteXattrBytes:(void*)arg1 count:(unsigned long)arg2 withName:(id)arg3 path:(id)arg4;
- (id)_info;
- (BOOL)_isPathOnMissingVolume:(id)arg1;
- (void)_logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 indent:(id)arg3;
- (void)_logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 indent:(id)arg3;
- (BOOL)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 asCopy:(BOOL)arg5;
- (void)_performRemoveFileAtPath:(id)arg1;
- (BOOL)_processHasUbiquityContainerEntitlement;
- (id)_randomTemporaryPathWithFileName:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;
- (void)_registerForUbiquityAccountChangeNotifications;
- (id)_safari_containerDirectory;
- (id)_safari_safariLibraryDirectory;
- (BOOL)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(id)arg5;
- (BOOL)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(id)arg5;
- (void)_web_backgroundRemoveFileAtPath:(id)arg1;
- (void)_web_backgroundRemoveLeftoverFiles:(id)arg1;
- (id)_web_carbonPathForPath_nowarn:(id)arg1;
- (BOOL)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2;
- (BOOL)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2;
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2;
- (BOOL)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4;
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2;
- (BOOL)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(BOOL*)arg2 traverseLink:(BOOL)arg3;
- (void)_web_noteFileChangedAtPath_nowarn:(id)arg1;
- (id)_web_pathWithUniqueFilenameForPath:(id)arg1;
- (BOOL)_web_removeFileOnlyAtPath:(id)arg1;
- (id)_web_startupVolumeName_nowarn;
- (id)_web_visibleItemsInDirectoryAtPath:(id)arg1;
- (id)_webkit_createTemporaryDirectoryWithTemplatePrefix:(id)arg1;
- (id)_webkit_pathWithUniqueFilenameForPath:(id)arg1;
- (BOOL)applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id*)arg3;
- (BOOL)applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id*)arg3;
- (void)assertDefaultFileProtectionAtDocumentURL:(id)arg1;
- (id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;
- (int)brc_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)brc_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)brc_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (BOOL)changeCurrentDirectoryPath:(id)arg1;
- (BOOL)changeFileAttributes:(id)arg1 atPath:(id)arg2;
- (BOOL)changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id*)arg5;
- (BOOL)changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id*)arg5;
- (BOOL)changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (BOOL)changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (id)componentsToDisplayForPath:(id)arg1;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1;
- (id)contentsAtPath:(id)arg1;
- (BOOL)contentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4;
- (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)cplFileExistsAtURL:(id)arg1;
- (BOOL)cplIsFileDoesNotExistError:(id)arg1;
- (BOOL)cplIsFileExistsError:(id)arg1;
- (BOOL)cplIsHardLinkNotPossibleError:(id)arg1;
- (BOOL)cplLinkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4;
- (BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4;
- (BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3;
- (BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3;
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)currentDirectoryPath;
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)directoryCanBeCreatedAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(int)arg3 keepExtension:(BOOL)arg4;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(int)arg3 keepExtension:(BOOL)arg4 error:(id*)arg5;
- (BOOL)directoryExistsAtPath:(id)arg1;
- (unsigned long long)directoryUsage:(id)arg1;
- (unsigned long long)directoryUsage:(id)arg1;
- (id)displayNameAtPath:(id)arg1;
- (BOOL)ensureDirectoryExistsAtPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 errorHandler:(id)arg4;
- (BOOL)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2;
- (id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(BOOL*)arg2;
- (id)fileSystemAttributesAtPath:(id)arg1;
- (const char *)fileSystemRepresentationWithPath:(id)arg1;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemRemoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (BOOL)filesystemItemRemoveOperation:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned int)arg2 withPath:(id)arg3;
- (BOOL)getRelationship:(int*)arg1 ofDirectory:(unsigned int)arg2 inDomain:(unsigned int)arg3 toItemAtURL:(id)arg4 error:(id*)arg5;
- (BOOL)getRelationship:(int*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4;
- (BOOL)grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2;
- (int)gs_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)gs_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 andExtension:(id)arg3 error:(id*)arg4;
- (id)gs_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (BOOL)hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)isDeletableFileAtPath:(id)arg1;
- (BOOL)isExecutableFileAtPath:(id)arg1;
- (BOOL)isReadableFileAtPath:(id)arg1;
- (BOOL)isUbiquitousItemAtURL:(id)arg1;
- (BOOL)isWritableFileAtPath:(id)arg1;
- (BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (void)logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2;
- (void)logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2;
- (BOOL)makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;
- (id)makeUniqueDirectoryWithPath:(id)arg1;
- (BOOL)mf_canWriteToDirectoryAtPath:(id)arg1;
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)mf_makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)mf_makeUniqueFileInDirectory:(id)arg1;
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (BOOL)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id*)arg3;
- (BOOL)mf_setValue:(id)arg1 forAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id*)arg4;
- (BOOL)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id*)arg4;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned int)arg2;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4;
- (BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)pathContentOfSymbolicLinkAtPath:(id)arg1;
- (unsigned long long)pathUsage:(id)arg1;
- (unsigned long long)pathUsage:(id)arg1;
- (id)pathsAtDirectory:(id)arg1 withNameFamily:(id)arg2;
- (int)rc_dataProtectionKeyBagState;
- (BOOL)rc_fileExistsAndIsInValidRecordingURL:(id)arg1;
- (BOOL)rc_isRestrictedByFileProtectionFromCreatingItemsInDirectory:(id)arg1;
- (BOOL)rc_isRestrictedByFileProtectionFromReadingAtPath:(id)arg1;
- (BOOL)rc_isRestrictedByFileProtectionFromWritingAtPath:(id)arg1;
- (id)rc_uniqueFileSystemURLWithPreferredURL:(id)arg1 uniquenessFormatString:(id)arg2;
- (int)relationshipOfDirectory:(unsigned int)arg1 inDomain:(unsigned int)arg2 toURL:(id)arg3 error:(id*)arg4;
- (int)relationshipOfURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;
- (BOOL)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (BOOL)removeItemsAtPaths:(id)arg1;
- (BOOL)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned int)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6;
- (id)safari_ensureDirectoryExists:(id)arg1;
- (id)safari_settingsDirectory;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned int)arg2;
- (BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;
- (BOOL)setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (BOOL)setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (BOOL)setDefaultFileProtectionAtDocumentURL:(id)arg1 error:(id*)arg2;
- (BOOL)setDefaultFileProtectionForDirectoryPath:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4;
- (BOOL)setUbiquitous:(BOOL)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4;
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2;
- (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned int)arg2;
- (id)subpathsAtPath:(id)arg1;
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)tmpFileForVideoTranscodeWithExtension:(id)arg1;
- (BOOL)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3;
- (id)ubiquityIdentityToken;
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;

@end
