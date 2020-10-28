//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPMiddlewareOperation-Protocol.h>

@class MPCFuture, MPCMediaRemoteMiddleware, NSArray;

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <MPMiddlewareOperation>
{
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCMediaRemoteMiddleware *_middleware;
    MPCFuture *_supportedCommandsFuture;
}

@property(retain, nonatomic) MPCFuture *supportedCommandsFuture; // @synthesize supportedCommandsFuture=_supportedCommandsFuture;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
// - (void).cxx_destruct;
- (id)timeoutDescription;
- (void)execute;
- (id)initWithMiddleware:(id)arg1;

@end

