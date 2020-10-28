//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/VCActionDonation-Protocol.h>

@class INInteraction, INShortcut, NSDate, NSString;

@interface VCInteractionDonation : NSObject <VCActionDonation>
{
    NSString *_identifier;
    NSString *_sourceAppIdentifier;
    NSString *_title;
    NSString *_subtitle;
    INInteraction *_interaction;
}

+ (id)timestampDateFormatter;
+ (void)initialize;
@property(readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id uniqueProperty;
@property(readonly, copy, nonatomic) NSString *suggestedPhrase;
@property(readonly, nonatomic) INShortcut *shortcut;
@property(readonly, copy, nonatomic) NSString *fullDescription;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 interaction:(id)arg3;

@end
