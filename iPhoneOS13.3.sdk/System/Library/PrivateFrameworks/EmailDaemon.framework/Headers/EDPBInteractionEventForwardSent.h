//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBBaseMessageFields-Protocol.h>
#import <EmailDaemon/EDPBDataSetters-Protocol.h>

@interface EDPBInteractionEventForwardSent : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying>
{
    long long _accountId;
    long long _conversationId;
    long long _mailboxId;
    long long _messageId;
    int _mailboxType;
    CDStruct_11e5c17e _has;
}

@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) long long mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMessageId;
@property(nonatomic) BOOL hasConversationId;
- (int)StringAsMailboxType:(id)arg1;
- (id)mailboxTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMailboxType;
@property(nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(nonatomic) BOOL hasMailboxId;
@property(nonatomic) BOOL hasAccountId;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3;

@end

