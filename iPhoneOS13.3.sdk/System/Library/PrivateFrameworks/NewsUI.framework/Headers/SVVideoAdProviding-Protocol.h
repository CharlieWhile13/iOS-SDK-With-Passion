//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/SVVideoProviding-Protocol.h>
#import <NewsUI/SVVideoSkipThreshold-Protocol.h>

@protocol SVVideoAdProviding <SVVideoProviding, SVVideoSkipThreshold>
@property(readonly, nonatomic) BOOL hasAction;
@property(readonly, nonatomic) NSUInteger skipThreshold;
- (void)presentPrivacyStatement;
- (void)presentAction;
- (void)skipped;
@end
