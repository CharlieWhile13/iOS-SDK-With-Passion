//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMHome;
@protocol HFCharacteristicValueSource, HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaAccessoryItemUpdateRequest : NSObject
{
    id <HFMediaValueSource> _mediaValueSource;
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
    id <HFMediaProfileContainer> _mediaProfile;
}

@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfile; // @synthesize mediaProfile=_mediaProfile;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) id <HFMediaValueSource> mediaValueSource; // @synthesize mediaValueSource=_mediaValueSource;
// - (void).cxx_destruct;
- (void)_appendSplitMediaAccountErrorForAccessory:(id)arg1 toResults:(id)arg2;
- (void)_appendSplitMediaAccountErrorIfNeededForAccessory:(id)arg1 toResults:(id)arg2;
- (id)_parentMediaSystem;
- (id)accessories;
- (id)_disambiguateMultipleAccessoryResponses:(id)arg1 forMediaSystem:(id)arg2;
- (id)updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1 valueSource:(id)arg2;

@end

