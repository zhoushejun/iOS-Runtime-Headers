/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_UIViewServiceDeputyXPCInterface>, NSArray, NSError, NSObject<OS_dispatch_queue>, NSString, NSUUID, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, _UIRemoteViewService;

@interface _UIRemoteViewControllerConnectionRequest : NSObject {
    _UIAsyncInvocation *_cancelInvocationForCurrentOperation;
    _UIRemoteViewControllerConnectionInfo *_connectionInfo;
    NSUUID *_contextToken;
    NSError *_error;
    id _exportedHostingObject;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    BOOL _isCancelledOrComplete;
    BOOL _legacyAppearance;
    NSObject<OS_dispatch_queue> *_queue;
    Class _remoteViewControllerClass;
    _UIAsyncInvocation *_requestCancellationInvocation;
    NSArray *_serializedAppearanceCustomizations;
    _UIRemoteViewService *_service;
    <_UIViewServiceDeputyXPCInterface> *_serviceViewControllerDeputyInterface;
    NSString *_viewControllerClassName;
    NSString *_viewServiceBundleIdentifier;
}

+ (id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 legacyAppearance:(BOOL)arg5 exportedHostingObject:(id)arg6 serviceViewControllerDeputyInterface:(id)arg7 connectionHandler:(id)arg8;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 legacyAppearance:(BOOL)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(id)arg7;
+ (id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 legacyAppearance:(BOOL)arg3 exportedHostingObject:(id)arg4 remoteViewControllerClass:(Class)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(id)arg7;

- (void)_cancelUnconditionallyThen:(id)arg1;
- (id)_cancelWithError:(id)arg1;
- (void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(id)arg3;
- (void)_connectToPlugInKitService;
- (void)_connectToServiceViewController;
- (void)_connectToTextEffectsOperator;
- (void)_connectToViewControllerControlMessageDeputy;
- (void)_connectToViewControllerOperator;
- (void)_connectToViewService;
- (void)_didFinishEstablishingConnection;
- (void)_sendServiceTextEffectsRequest;
- (void)_sendServiceViewControllerRequest;
- (void)dealloc;

@end
