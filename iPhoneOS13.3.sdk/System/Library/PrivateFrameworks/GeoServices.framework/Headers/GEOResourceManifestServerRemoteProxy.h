//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestServerProxy-Protocol.h>

@class GEOActiveTileGroup, GEOResourceManifestConfiguration, NSString;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_xpc_object;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy>
{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_conn;
    BOOL _sentConfigurationMessage;
    BOOL _hasOpenConnection;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
//     struct os_unfair_lock_s _authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
}

@property(nonatomic) __weak id <GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (NSUInteger)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (void)deactivateResourceScenario:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)activateResourceScale:(int)arg1;
- (void)performOpportunisticResourceLoading;
- (void)setManifestToken:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getResourceManifestWithHandler:(id /* CDUnknownBlockType */)arg1;
- (id)updateProgress;
- (void)cancelCurrentManifestUpdate;
- (void)forceUpdate:(long long)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updateIfNecessary:(id /* CDUnknownBlockType */)arg1;
- (oneway void)resetActiveTileGroup;
- (void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)closeConnection;
- (void)openConnection;
- (id)_xpcConnection;
- (id)configuration;
- (id)authToken;
- (void)dealloc;
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (id)serverQueue;

@end

