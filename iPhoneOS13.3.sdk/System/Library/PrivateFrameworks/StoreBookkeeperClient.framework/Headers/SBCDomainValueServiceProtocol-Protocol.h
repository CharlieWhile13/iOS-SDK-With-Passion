//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBCPlaybackPositionEntity;

@protocol SBCDomainValueServiceProtocol <NSObject>
- (oneway void)pushPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 completionBlock:(void (^)(BOOL, NSError *, SBCPlaybackPositionEntity *))arg2;
- (oneway void)pullPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 completionBlock:(void (^)(BOOL, NSError *, SBCPlaybackPositionEntity *))arg2;
@end

