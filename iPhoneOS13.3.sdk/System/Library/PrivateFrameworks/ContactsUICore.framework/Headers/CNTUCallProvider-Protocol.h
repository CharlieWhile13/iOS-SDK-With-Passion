//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNContact, CNHandle, NSSet, NSString;
@protocol CNTUDialRequest;

@protocol CNTUCallProvider <NSObject>
@property(readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property(readonly, nonatomic) BOOL supportsVideo;
@property(readonly, nonatomic) BOOL supportsAudio;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id <CNTUDialRequest>)dialRequestForHandle:(CNHandle *)arg1 contact:(CNContact *)arg2 video:(BOOL)arg3;
@end

