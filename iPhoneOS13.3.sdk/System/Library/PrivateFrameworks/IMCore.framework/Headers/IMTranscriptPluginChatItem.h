//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessagePartChatItem.h>

#import <IMCore/IMPluginChatItemProtocol-Protocol.h>

@class IMBalloonPluginDataSource, IMPluginPayload, NSString;

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol>
{
    BOOL _isLastChatItemOfPluginType;
    BOOL _hasSetIsLastChatItemOfPluginType;
    BOOL _parentChatHasKnownParticipants;
    IMPluginPayload *_initialPayload;
    NSString *_bundleIdentifier;
    IMBalloonPluginDataSource *_dataSource;
}

@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) BOOL parentChatHasKnownParticipants; // @synthesize parentChatHasKnownParticipants=_parentChatHasKnownParticipants;
@property(nonatomic) BOOL hasSetIsLastChatItemOfPluginType; // @synthesize hasSetIsLastChatItemOfPluginType=_hasSetIsLastChatItemOfPluginType;
@property(nonatomic, setter=setLastChatItemOfPluginType:) BOOL isLastChatItemOfPluginType; // @synthesize isLastChatItemOfPluginType=_isLastChatItemOfPluginType;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) IMPluginPayload *initialPayload; // @synthesize initialPayload=_initialPayload;
// - (void).cxx_destruct;
- (BOOL)wantsAutoPlayback;
@property(readonly, nonatomic) BOOL isSaved;
@property(readonly, nonatomic) BOOL isPlayed;
@property(readonly, nonatomic) NSUInteger playbackType;
@property(readonly, nonatomic) NSString *pluginSessionGUID;
@property(readonly, nonatomic) BOOL isDataSourceInitialized;
- (id)_initWithItem:(id)arg1 initialPayload:(id)arg2 messagePartRange:(NSRange)arg3 parentChatHasKnownParticipants:(BOOL)arg4;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSString *type;

@end

