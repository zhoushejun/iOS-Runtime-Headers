/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManualDownloadPolicy : SUDefaultDownloadPolicy {
    BOOL _autoDownloadAllowableForCellular;
    BOOL _downloadAllowableForCellular;
    BOOL _downloadAllowableForCellular2G;
    BOOL _downloadAllowableForCellularRoaming;
    BOOL _downloadAllowableForWiFi;
    BOOL _downloadFreeForCellular;
    BOOL _downloadable;
    Class _fakeClass;
    BOOL _hasEnoughDiskSpace;
    BOOL _powerRequired;
}

@property(getter=isDownloadAllowableForCellular) BOOL downloadAllowableForCellular;
@property(getter=isDownloadAllowableForCellular2G) BOOL downloadAllowableForCellular2G;
@property(getter=isDownloadAllowableForCellularRoaming) BOOL downloadAllowableForCellularRoaming;
@property(getter=isDownloadAllowableForWiFi) BOOL downloadAllowableForWiFi;
@property(getter=isDownloadFreeForCellular) BOOL downloadFreeForCellular;
@property(getter=isDownloadable) BOOL downloadable;
@property(retain) Class fakeClass;
@property(getter=hasEnoughDiskSpace) BOOL hasEnoughDiskSpace;
@property(getter=isPowerRequired) BOOL powerRequired;

- (Class)class;
- (Class)fakeClass;
- (BOOL)hasEnoughDiskSpace;
- (id)init;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)isDownloadAllowableForCellular2G;
- (BOOL)isDownloadAllowableForCellularRoaming;
- (BOOL)isDownloadAllowableForWiFi;
- (BOOL)isDownloadFreeForCellular;
- (BOOL)isDownloadable;
- (BOOL)isPowerRequired;
- (void)setDownloadAllowableForCellular2G:(BOOL)arg1;
- (void)setDownloadAllowableForCellular:(BOOL)arg1;
- (void)setDownloadAllowableForCellularRoaming:(BOOL)arg1;
- (void)setDownloadAllowableForWiFi:(BOOL)arg1;
- (void)setDownloadFreeForCellular:(BOOL)arg1;
- (void)setDownloadable:(BOOL)arg1;
- (void)setFakeClass:(Class)arg1;
- (void)setHasEnoughDiskSpace:(BOOL)arg1;
- (void)setPowerRequired:(BOOL)arg1;
- (BOOL)superIsDownloadable;

@end
