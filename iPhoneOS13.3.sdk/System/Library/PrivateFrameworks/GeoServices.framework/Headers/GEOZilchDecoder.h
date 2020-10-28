//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequestManager.h>

@class NSObject;
@protocol GEOMapAccessRestrictions, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoder : GEOMapRequestManager
{
    NSObject<OS_dispatch_queue> *_decoderQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    struct mutex _lock;
    id <GEOMapAccessRestrictions> _mapAccessRestrictions;
}

+ (BOOL)decodingSupported;
@property(nonatomic) __weak id <GEOMapAccessRestrictions> mapAccessRestrictions; // @synthesize mapAccessRestrictions=_mapAccessRestrictions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue; // @synthesize decoderQueue=_decoderQueue;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)requestComplete:(id)arg1;
- (void)trackRequest:(id)arg1;
- (id)decodeZilchMessage:(shared_ptr_27244a92)arg1 pathHandler:(id /* CDUnknownBlockType */)arg2 errorHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setRequestQueue:(id)arg1;
- (id)requestQueue;
- (id)init;

@end
