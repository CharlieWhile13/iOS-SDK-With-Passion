//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPMiddlewareOperation-Protocol.h>

@class NSArray, NSMapTable;

@protocol MPMiddlewareAutomaticDependencyOperation <MPMiddlewareOperation>
@property(retain, nonatomic) NSMapTable *inputOperations;
@property(readonly, nonatomic) NSArray *outputProtocols;
@property(readonly, nonatomic) NSArray *inputProtocols;
@end

