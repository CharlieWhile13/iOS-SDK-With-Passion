//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSNumber, NSUUID, PKPrinter;

@protocol PKBrowserClientProtocol <NSObject>
- (void)btlePrinterFound:(PKPrinter *)arg1;
- (void)btleRssiUpdated:(NSUUID *)arg1 rssi:(NSNumber *)arg2;
- (void)printerRemoved:(PKPrinter *)arg1 more:(BOOL)arg2;
- (void)printerAdded:(PKPrinter *)arg1 more:(BOOL)arg2;
@end

