//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>

@class ASCodableCloudKitRelationship, CKRecord, CKRecordID, NSArray, NSDate, NSSet, NSString, NSUUID;

@interface ASRelationship : NSObject <ASCloudKitCodable, NSCopying>
{
    BOOL _isFriendshipActive;
    BOOL _isMuteEnabled;
    BOOL _hasIncomingInviteRequest;
    BOOL _hasOutgoingInviteRequest;
    BOOL _isAwaitingInviteResponse;
    BOOL _hasIncomingCompetitionRequest;
    BOOL _hasOutgoingCompetitionRequest;
    BOOL _hasIgnoredCompetitionRequest;
    BOOL _isAwaitingCompetitionResponse;
    BOOL _isCompetitionActive;
    BOOL _hasCompletedCompetition;
    BOOL _isHidingActivityData;
    BOOL _sentInviteResponse;
    unsigned int _supportedPhoneFeatures;
    unsigned int _supportedWatchFeatures;
    long long _version;
    NSUUID *_UUID;
    NSString *_incomingHandshakeToken;
    NSString *_outgoingHandshakeToken;
    NSString *_cloudKitAddress;
    NSSet *_addresses;
    NSString *_preferredReachableAddress;
    NSString *_preferredReachableService;
    CKRecord *_systemFieldsOnlyRecord;
    CKRecordID *_relationshipShareID;
    CKRecordID *_remoteRelationshipShareID;
    CKRecordID *_remoteActivityDataShareID;
    NSArray *_relationshipEvents;
    NSDate *_dateForLatestOutgoingCompetitionRequest;
    NSDate *_dateForLatestIncomingCompetitionRequest;
    NSDate *_dateForLatestIgnoredCompetitionRequest;
    NSDate *_dateForLatestDataHidden;
    NSDate *_dateForLatestOutgoingInviteRequest;
    NSDate *_dateForLatestRelationshipStart;
    NSDate *_dateActivityDataInitiallyBecameVisible;
}

+ (id)relationshipsWithRelationshipAndEventRecords:(id)arg1;
+ (id)relationshipWithCodableRelationship:(id)arg1 version:(long long)arg2;
+ (void)_relationshipWithRecord:(id)arg1 relationshipEventRecords:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (id)relationshipWithCodableRelationshipContainer:(id)arg1;
@property(nonatomic) BOOL sentInviteResponse; // @synthesize sentInviteResponse=_sentInviteResponse;
@property(retain, nonatomic) NSDate *dateActivityDataInitiallyBecameVisible; // @synthesize dateActivityDataInitiallyBecameVisible=_dateActivityDataInitiallyBecameVisible;
@property(retain, nonatomic) NSDate *dateForLatestRelationshipStart; // @synthesize dateForLatestRelationshipStart=_dateForLatestRelationshipStart;
@property(retain, nonatomic) NSDate *dateForLatestOutgoingInviteRequest; // @synthesize dateForLatestOutgoingInviteRequest=_dateForLatestOutgoingInviteRequest;
@property(retain, nonatomic) NSDate *dateForLatestDataHidden; // @synthesize dateForLatestDataHidden=_dateForLatestDataHidden;
@property(readonly, nonatomic) BOOL isHidingActivityData; // @synthesize isHidingActivityData=_isHidingActivityData;
@property(retain, nonatomic) NSDate *dateForLatestIgnoredCompetitionRequest; // @synthesize dateForLatestIgnoredCompetitionRequest=_dateForLatestIgnoredCompetitionRequest;
@property(retain, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest; // @synthesize dateForLatestIncomingCompetitionRequest=_dateForLatestIncomingCompetitionRequest;
@property(retain, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest; // @synthesize dateForLatestOutgoingCompetitionRequest=_dateForLatestOutgoingCompetitionRequest;
@property(nonatomic) BOOL hasCompletedCompetition; // @synthesize hasCompletedCompetition=_hasCompletedCompetition;
@property(nonatomic) BOOL isCompetitionActive; // @synthesize isCompetitionActive=_isCompetitionActive;
@property(nonatomic) BOOL isAwaitingCompetitionResponse; // @synthesize isAwaitingCompetitionResponse=_isAwaitingCompetitionResponse;
@property(nonatomic) BOOL hasIgnoredCompetitionRequest; // @synthesize hasIgnoredCompetitionRequest=_hasIgnoredCompetitionRequest;
@property(nonatomic) BOOL hasOutgoingCompetitionRequest; // @synthesize hasOutgoingCompetitionRequest=_hasOutgoingCompetitionRequest;
@property(nonatomic) BOOL hasIncomingCompetitionRequest; // @synthesize hasIncomingCompetitionRequest=_hasIncomingCompetitionRequest;
@property(nonatomic) BOOL isAwaitingInviteResponse; // @synthesize isAwaitingInviteResponse=_isAwaitingInviteResponse;
@property(nonatomic) BOOL hasOutgoingInviteRequest; // @synthesize hasOutgoingInviteRequest=_hasOutgoingInviteRequest;
@property(nonatomic) BOOL hasIncomingInviteRequest; // @synthesize hasIncomingInviteRequest=_hasIncomingInviteRequest;
@property(nonatomic) BOOL isMuteEnabled; // @synthesize isMuteEnabled=_isMuteEnabled;
@property(nonatomic) BOOL isFriendshipActive; // @synthesize isFriendshipActive=_isFriendshipActive;
@property(nonatomic) unsigned int supportedWatchFeatures; // @synthesize supportedWatchFeatures=_supportedWatchFeatures;
@property(nonatomic) unsigned int supportedPhoneFeatures; // @synthesize supportedPhoneFeatures=_supportedPhoneFeatures;
@property(copy, nonatomic) NSArray *relationshipEvents; // @synthesize relationshipEvents=_relationshipEvents;
@property(retain, nonatomic) CKRecordID *remoteActivityDataShareID; // @synthesize remoteActivityDataShareID=_remoteActivityDataShareID;
@property(retain, nonatomic) CKRecordID *remoteRelationshipShareID; // @synthesize remoteRelationshipShareID=_remoteRelationshipShareID;
@property(retain, nonatomic) CKRecordID *relationshipShareID; // @synthesize relationshipShareID=_relationshipShareID;
@property(retain, nonatomic) CKRecord *systemFieldsOnlyRecord; // @synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord;
@property(retain, nonatomic) NSString *preferredReachableService; // @synthesize preferredReachableService=_preferredReachableService;
@property(retain, nonatomic) NSString *preferredReachableAddress; // @synthesize preferredReachableAddress=_preferredReachableAddress;
@property(retain, nonatomic) NSSet *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) NSString *cloudKitAddress; // @synthesize cloudKitAddress=_cloudKitAddress;
@property(retain, nonatomic) NSString *outgoingHandshakeToken; // @synthesize outgoingHandshakeToken=_outgoingHandshakeToken;
@property(retain, nonatomic) NSString *incomingHandshakeToken; // @synthesize incomingHandshakeToken=_incomingHandshakeToken;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) long long version; // @synthesize version=_version;
// - (void).cxx_destruct;
- (void)_updateCurrentRelationshipState;
- (void)_updateDateFriendshipBeganWithDate:(id)arg1;
- (void)_updateDateActivityDataBecameVisibleWithDate:(id)arg1;
- (void)_clearRelationshipState;
- (NSUInteger)_nextAnchor;
- (void)_setRelationshipEvents:(id)arg1;
- (BOOL)supportsCompetitions;
@property(readonly, nonatomic) NSUInteger currentRelationshipEventAnchor;
- (void)traverseRelationshipHistoryStartingAtEventWithAnchor:(NSUInteger)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)relationshipSnapshotForDate:(id)arg1;
@property(readonly, nonatomic) NSDate *timestampForMostRecentRelationshipEvent;
- (void)insertEvents:(id)arg1;
- (void)insertEventWithType:(unsigned short)arg1;
@property(readonly, nonatomic) BOOL isActivityDataVisible;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToRelationship:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
@property(readonly, nonatomic) ASCodableCloudKitRelationship *codableRelationship;
- (id)recordWithZoneID:(id)arg1;
- (id)codableRelationshipContainerIncludingCloudKitFields:(BOOL)arg1;

@end

