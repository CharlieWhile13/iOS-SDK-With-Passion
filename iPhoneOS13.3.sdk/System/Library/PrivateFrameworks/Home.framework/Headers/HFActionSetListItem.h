//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, HMRoom;

@interface HFActionSetListItem : HFItem
{
    BOOL _onlyShowsFavorites;
    HMHome *_home;
    HMRoom *_room;
}

@property(nonatomic) BOOL onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;

@end

