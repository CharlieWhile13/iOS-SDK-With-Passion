//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;
@protocol PXGestureProviderDelegate;

@interface PXGestureProvider : NSObject
{
    NSArray *_gestureRecognizers;
    id <PXGestureProviderDelegate> _delegate;
    UIView *_hostingView;
}

@property(nonatomic) __weak UIView *hostingView; // @synthesize hostingView=_hostingView;
@property(nonatomic) __weak id <PXGestureProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
// - (void).cxx_destruct;
- (void)hostingViewDidChange;

@end

