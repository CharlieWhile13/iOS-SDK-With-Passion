//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAnalyticsReporting-Protocol.h>

@class SXVideoComponent;
@protocol SXAnalyticsReporting;

@interface SXVideoComponentAnalyticsReporting : NSObject <SXAnalyticsReporting>
{
    SXVideoComponent *_component;
    id <SXAnalyticsReporting> _analyticsReporting;
}

@property(readonly, nonatomic) __weak id <SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property(readonly, nonatomic) SXVideoComponent *component; // @synthesize component=_component;
// - (void).cxx_destruct;
- (void)reportEvent:(id)arg1;
- (id)initWithComponent:(id)arg1 analyticsProviding:(id)arg2;

@end
