//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ISPlayerItemChef : NSObject
{
    NSOperationQueue *__operationQueue;
    NSObject<OS_dispatch_queue> *__isolationQueue;
    NSMutableDictionary *__operationsByRequestID;
    long long __currentRequestID;
}

+ (id)defaultChef;
@property(nonatomic, setter=_setCurrentRequestID:) long long _currentRequestID; // @synthesize _currentRequestID=__currentRequestID;
@property(readonly, nonatomic) NSMutableDictionary *_operationsByRequestID; // @synthesize _operationsByRequestID=__operationsByRequestID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_isolationQueue; // @synthesize _isolationQueue=__isolationQueue;
@property(readonly, nonatomic) NSOperationQueue *_operationQueue; // @synthesize _operationQueue=__operationQueue;
// - (void).cxx_destruct;
- (void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1;
- (long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(CDStruct_e83c9415)arg2 photoTime:(CDStruct_1b6d18a9)arg3 includeVideo:(BOOL)arg4 includeAudio:(BOOL)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(CDStruct_1b6d18a9)arg2 trimmedTimeRange:(CDStruct_e83c9415)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end

