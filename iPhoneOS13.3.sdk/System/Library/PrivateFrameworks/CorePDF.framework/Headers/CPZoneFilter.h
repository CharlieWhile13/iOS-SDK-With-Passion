//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPPage;

__attribute__((visibility("hidden")))
@interface CPZoneFilter : NSObject
{
    CPPage *page;
    double minArea;
}

+ (void)filterZonesInPage:(id)arg1;
- (void)findUsedGraphicsInZone:(id)arg1;
- (void)findBackgroundGraphicsInZone:(id)arg1;
- (void)filterZonesInZone:(id)arg1;
- (id)initWithPage:(id)arg1;

@end

