//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanClientDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface CTCellularPlanManagerDelegate : NSObject <CTCellularPlanClientDelegate>
{
}

- (void)remoteProvisioningDidBecomeAvailable;
- (void)carrierInfoDidUpdate;
- (void)pendingTransferPlanInfoDidUpdate;
- (void)localPlanInfoDidUpdate:(id)arg1;
- (void)planInfoDidUpdate;

@end

