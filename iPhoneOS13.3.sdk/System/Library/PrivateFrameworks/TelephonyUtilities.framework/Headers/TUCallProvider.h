//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSOrderedSet, NSSet, NSString, NSURL, TUSandboxExtendedURL;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _supportsAudioOnly;
    BOOL _supportsAudioAndVideo;
    BOOL _supportsEmergency;
    BOOL _supportsVoicemail;
    BOOL _supportsRecents;
    BOOL _supportsCurrentPlatform;
    unsigned int _audioSessionID;
    NSString *_identifier;
    NSString *_localizedName;
    NSSet *_supportedHandleTypes;
    NSURL *_bundleURL;
    NSString *_bundleIdentifier;
    NSArray *_emergencyHandles;
    NSArray *_emergencyLabeledHandles;
    NSArray *_handoffIdentifiers;
    NSOrderedSet *_prioritizedSenderIdentities;
    TUSandboxExtendedURL *_sandboxExtendedRingtoneSoundURL;
    NSURL *_originalRingtoneSoundURL;
    NSData *_iconTemplateImageData;
    NSUInteger _maximumCallGroups;
    NSUInteger _maximumCallsPerCallGroup;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) BOOL supportsCurrentPlatform; // @synthesize supportsCurrentPlatform=_supportsCurrentPlatform;
@property(nonatomic) BOOL supportsRecents; // @synthesize supportsRecents=_supportsRecents;
@property(nonatomic) NSUInteger maximumCallsPerCallGroup; // @synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup;
@property(nonatomic) NSUInteger maximumCallGroups; // @synthesize maximumCallGroups=_maximumCallGroups;
@property(copy, nonatomic) NSData *iconTemplateImageData; // @synthesize iconTemplateImageData=_iconTemplateImageData;
@property(retain, nonatomic) NSURL *originalRingtoneSoundURL; // @synthesize originalRingtoneSoundURL=_originalRingtoneSoundURL;
@property(retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedRingtoneSoundURL; // @synthesize sandboxExtendedRingtoneSoundURL=_sandboxExtendedRingtoneSoundURL;
@property(copy, nonatomic) NSOrderedSet *prioritizedSenderIdentities; // @synthesize prioritizedSenderIdentities=_prioritizedSenderIdentities;
@property(copy, nonatomic) NSArray *handoffIdentifiers; // @synthesize handoffIdentifiers=_handoffIdentifiers;
@property(copy, nonatomic) NSArray *emergencyLabeledHandles; // @synthesize emergencyLabeledHandles=_emergencyLabeledHandles;
@property(copy, nonatomic) NSArray *emergencyHandles; // @synthesize emergencyHandles=_emergencyHandles;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSSet *supportedHandleTypes; // @synthesize supportedHandleTypes=_supportedHandleTypes;
@property(nonatomic) BOOL supportsVoicemail; // @synthesize supportsVoicemail=_supportsVoicemail;
@property(nonatomic) BOOL supportsEmergency; // @synthesize supportsEmergency=_supportsEmergency;
@property(nonatomic) BOOL supportsAudioAndVideo; // @synthesize supportsAudioAndVideo=_supportsAudioAndVideo;
@property(nonatomic) BOOL supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToCallProvider:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)senderIdentities;
- (void)setSenderIdentities:(id)arg1;
@property(retain, nonatomic) NSURL *ringtoneSoundURL;
- (id)inCallUIBundleIdentifier;
- (id)displayAppBundleIdentifier;
- (id)senderIdentityForHandle:(id)arg1;
- (id)senderIdentityForAccountUUID:(id)arg1;
- (id)senderIdentityForUUID:(id)arg1;
- (BOOL)hasRestrictionsInRetailEnvironment;
- (BOOL)prefersShowingInCallUI;
- (BOOL)supportsShowingInCallUI;
- (BOOL)isSystemProvider;
- (BOOL)isTinCanProvider;
@property(readonly, nonatomic, getter=isFaceTimeProvider) BOOL faceTimeProvider;
@property(readonly, nonatomic, getter=isTelephonyProvider) BOOL telephonyProvider;
- (BOOL)supportsHandleType:(long long)arg1;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

