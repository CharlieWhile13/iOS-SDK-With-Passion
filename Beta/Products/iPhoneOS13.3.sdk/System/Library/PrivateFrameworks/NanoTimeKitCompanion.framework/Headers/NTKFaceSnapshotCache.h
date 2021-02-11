/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceSnapshotCache : NSObject {
    NSMapTable * _callCount;
    NSMapTable * _callbacks;
    NSMapTable * _faceQOS;
    NSObject<OS_dispatch_queue> * _snapshotQueue;
    NSMutableDictionary * _snapshots;
}

@property (nonatomic, readonly) NSMapTable *callCount;
@property (nonatomic, readonly) NSMapTable *callbacks;
@property (nonatomic, readonly) NSMapTable *faceQOS;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotQueue;
@property (nonatomic, readonly) NSMutableDictionary *snapshots;

+ (id)snapshotCache;

- (void).cxx_destruct;
- (void)_attemptSnapshotOfFace:(id)arg1;
- (void)_invokeCallbacksOfFace:(id)arg1 withSnapshot:(id)arg2;
- (void)_snapshotProcessInterrupted:(id)arg1;
- (id)cachedSnapshotOfFace:(id)arg1;
- (id)callCount;
- (id)callbacks;
- (void)dealloc;
- (id)faceQOS;
- (void)fetchSnapshotOfFace:(id)arg1 atQOS:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)snapshotQueue;
- (id)snapshots;

@end