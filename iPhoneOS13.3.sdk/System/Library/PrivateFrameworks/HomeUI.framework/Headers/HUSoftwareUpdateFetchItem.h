//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, NAFuture;

@interface HUSoftwareUpdateFetchItem : HFItem
{
    HMHome *_home;
    NAFuture *_softwareUpdateFetchFuture;
}

@property(retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // @synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2;
- (id)init;

@end

