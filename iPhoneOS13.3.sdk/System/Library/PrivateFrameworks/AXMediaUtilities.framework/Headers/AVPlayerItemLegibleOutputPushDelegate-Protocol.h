//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AVPlayerItemOutputPushDelegate-Protocol.h>

@class AVPlayerItemLegibleOutput, NSArray;

@protocol AVPlayerItemLegibleOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@optional
- (void)legibleOutput:(AVPlayerItemLegibleOutput *)arg1 didOutputAttributedStrings:(NSArray *)arg2 nativeSampleBuffers:(NSArray *)arg3 forItemTime:(CDStruct_198678f7)arg4;
@end

