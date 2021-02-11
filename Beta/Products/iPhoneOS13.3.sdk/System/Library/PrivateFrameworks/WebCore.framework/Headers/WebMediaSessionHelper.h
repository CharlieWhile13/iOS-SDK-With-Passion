/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebMediaSessionHelper : NSObject {
    struct MediaSessionManageriOS { int (**x1)(); int (**x2)(); int (**x3)(); int (**x4)(); unsigned int x5[6]; struct Vector<WTF::WeakPtr<WebCore::PlatformMediaSession>, 0, WTF::CrashOnOverflow, 16> { struct WeakPtr<WebCore::PlatformMediaSession> {} *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; } x6; struct unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct __compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct RemoteCommandListener {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<PAL::SystemSleepListener, std::__1::default_delete<PAL::SystemSleepListener> > { struct __compressed_pair<PAL::SystemSleepListener *, std::__1::default_delete<PAL::SystemSleepListener> > { struct SystemSleepListener {} *x_1_2_1; } x_8_1_1; } x8; struct RefPtr<WebCore::AudioHardwareListener, WTF::DumbPtrTraits<WebCore::AudioHardwareListener> > { struct AudioHardwareListener {} *x_9_1_1; } x9; bool x10; bool x11; bool x12; bool x13; bool x14; } * _callback;
    bool  _monitoringAirPlayRoutes;
    struct RetainPtr<AVRouteDetector> { 
        void *m_ptr; 
    }  _routeDetector;
    bool  _startMonitoringAirPlayRoutesPending;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activeAudioRouteDidChange:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)carPlayIsConnectedDidChange:(id)arg1;
- (void)carPlayServerDied:(id)arg1;
- (void)clearCallback;
- (void)dealloc;
- (bool)hasWirelessTargetsAvailable;
- (id)initWithCallback:(struct MediaSessionManageriOS { int (**x1)(); int (**x2)(); int (**x3)(); int (**x4)(); unsigned int x5[6]; struct Vector<WTF::WeakPtr<WebCore::PlatformMediaSession>, 0, WTF::CrashOnOverflow, 16> { struct WeakPtr<WebCore::PlatformMediaSession> {} *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; } x6; struct unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct __compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct RemoteCommandListener {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<PAL::SystemSleepListener, std::__1::default_delete<PAL::SystemSleepListener> > { struct __compressed_pair<PAL::SystemSleepListener *, std::__1::default_delete<PAL::SystemSleepListener> > { struct SystemSleepListener {} *x_1_2_1; } x_8_1_1; } x8; struct RefPtr<WebCore::AudioHardwareListener, WTF::DumbPtrTraits<WebCore::AudioHardwareListener> > { struct AudioHardwareListener {} *x_9_1_1; } x9; bool x10; bool x11; bool x12; bool x13; bool x14; }*)arg1;
- (void)interruption:(id)arg1;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;

@end