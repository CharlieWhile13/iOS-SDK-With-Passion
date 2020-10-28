//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARSession;
@protocol MDARControllerDelegate;

__attribute__((visibility("hidden")))
@interface MDARController : NSObject
{
    NSUInteger _trackingState;
    NSUInteger _trackingStateReason;
    NSUInteger _sessionInterruptedReason;
    id <MDARControllerDelegate> _delegate;
    ARSession *_session;
}

+ (BOOL)isSupported;
@property(readonly, nonatomic) ARSession *session; // @synthesize session=_session;
@property(nonatomic) id <MDARControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUInteger sessionInterruptedReason; // @synthesize sessionInterruptedReason=_sessionInterruptedReason;
- (void)pause;
- (void)run:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
