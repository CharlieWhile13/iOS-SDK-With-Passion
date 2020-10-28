//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebInspectorFrontend : NSObject
{
    struct WebInspectorFrontendClient m_frontendClient;
}

- (void)showConsole;
- (void)setTimelineProfilingEnabled:(BOOL)arg1;
- (BOOL)isTimelineProfilingEnabled;
- (void)stopProfilingJavaScript;
- (void)startProfilingJavaScript;
- (BOOL)isProfilingJavaScript;
- (void)setDebuggingEnabled:(BOOL)arg1;
- (BOOL)isDebuggingEnabled;
- (void)close;
- (void)detach;
- (void)attach;
- (id)initWithFrontendClient:(struct WebInspectorFrontendClient )arg1;

@end

