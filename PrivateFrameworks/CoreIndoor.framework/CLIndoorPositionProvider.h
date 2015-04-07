/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@class NSObject<OS_dispatch_queue>, NSXPCConnection, ServiceState;

@interface CLIndoorPositionProvider : NSObject {
    NSObject<OS_dispatch_queue> *_frameworkQueue;
    NSXPCConnection *_indoorServiceConnection;
    struct optional<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > > { 
        bool m_initialized; 
        struct aligned_storage<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > > { 
            union dummy_u { 
                BOOL data[8]; 
                struct a4 { } aligner_; 
            } dummy_; 
        } m_storage; 
    } _lastCrashTime;
    ServiceState *_state;
}

@property(retain) ServiceState * state;

+ (int)locationType:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)connectionOptions:(id)arg1;
- (void)dealloc;
- (id)defaultErrHandler;
- (void)gpsEstimateAvailable:(id)arg1;
- (void)gpsSignalQualityAvailable:(id)arg1;
- (id)init;
- (id)initWithApiKey:(id)arg1;
- (id)initWithApiKey:(id)arg1 onServer:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (void)invalidate;
- (id)newConnection;
- (void)playbackDatarun:(id)arg1;
- (void)setApiKey:(id)arg1;
- (void)setApiKey:(id)arg1 onServer:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setState:(id)arg1;
- (void)setVenues:(id)arg1;
- (void)startUpdatingLocation;
- (id)state;
- (void)stopUpdatingLocation;
- (void)withinQueueInitializeConnection;
- (void)withinQueueInterruptionHandler;
- (void)withinQueueInvalidate;
- (void)withinQueueReconnectInvalidatedConnection;
- (void)withinQueueReconnectInvalidatedConnectionDebounce;
- (void)withinQueueReinitializeRemoteState;
- (void)withinQueueScheduleDeferredReinitializeRemote:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1;
- (void)withinQueueSetDelegate:(id)arg1;
- (int)withinQueueShouldReinitializeRemote:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1;

@end
