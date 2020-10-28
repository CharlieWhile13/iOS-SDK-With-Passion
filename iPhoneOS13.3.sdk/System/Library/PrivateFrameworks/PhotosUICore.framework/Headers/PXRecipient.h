//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCMMInvitationParticipant-Protocol.h>

@class CNContact, NSSet, NSString, PXRecipientTransport;

@interface PXRecipient : NSObject <PXCMMInvitationParticipant, NSCopying>
{
    NSString *_firstName;
    NSString *_lastName;
    NSSet *_allEmails;
    NSSet *_allPhones;
    NSSet *_unformattedAllPhones;
    NSString *_phoneNumberString;
    NSString *_emailAddressString;
    PXRecipientTransport *_suggestedTransport;
    NSString *_localizedName;
    CNContact *_contact;
}

+ (id)_contactForAddress:(id)arg1 recipientKind:(long long)arg2;
+ (id)new;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) PXRecipientTransport *suggestedTransport; // @synthesize suggestedTransport=_suggestedTransport;
@property(readonly, copy, nonatomic) NSString *emailAddressString; // @synthesize emailAddressString=_emailAddressString;
@property(readonly, copy, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;
@property(readonly, nonatomic) NSSet *unformattedAllPhones; // @synthesize unformattedAllPhones=_unformattedAllPhones;
@property(readonly, nonatomic) NSSet *allPhones; // @synthesize allPhones=_allPhones;
@property(readonly, nonatomic) NSSet *allEmails; // @synthesize allEmails=_allEmails;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;
- (id)initWithAddress:(id)arg1 nameComponents:(id)arg2 recipientKind:(long long)arg3;
- (id)init;

@end

