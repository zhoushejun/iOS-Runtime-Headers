/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;

@interface AADeviceProvisioningSession : NSObject {
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorageRef;
    NSString *_dsid;
    unsigned long long _dsidNumber;
}

- (void).cxx_destruct;
- (void)addProvisioningInfoToAARequest:(id)arg1;
- (void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(BOOL)arg2;
- (void)addProvisioningInfoToURLRequest:(id)arg1;
- (id)deviceProvisioningInfo;
- (long)eraseProvisioning;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (long)provisionDeviceWithData:(id)arg1;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (long)synchronizeProvisioningWithData:(id)arg1;

@end
