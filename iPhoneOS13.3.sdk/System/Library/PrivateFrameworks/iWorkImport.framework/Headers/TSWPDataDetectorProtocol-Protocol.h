//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;

@protocol TSWPDataDetectorProtocol <NSObject>
+ (BOOL)detectedDataInString:(NSString *)arg1 scanRange:(NSRange)arg2;
+ (NSArray *)scanString:(NSString *)arg1 scanRange:(NSRange)arg2;
+ (NSRange)calculateScanRangeForString:(NSString *)arg1 changedRange:(NSRange)arg2;
+ (NSString *)detectorIdentifier;
@end

