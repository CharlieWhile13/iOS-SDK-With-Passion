//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPCPlayerResponse, MediaControlsEndpointController;

@protocol MediaControlsEndpointControllerDelegate <NSObject>
- (void)endpointControllerRouteDidUpdate:(MediaControlsEndpointController *)arg1;
- (void)endpointControllerDidUpdateRoutingAvailability:(MediaControlsEndpointController *)arg1;
- (void)endpointControllerDidChangeState:(MediaControlsEndpointController *)arg1;
- (void)endpointController:(MediaControlsEndpointController *)arg1 didLoadNewResponse:(MPCPlayerResponse *)arg2;
@end

