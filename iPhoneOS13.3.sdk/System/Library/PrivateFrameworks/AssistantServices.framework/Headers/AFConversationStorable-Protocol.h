//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFDataStore, AFDialogPhase, AceObject, NSString, NSUUID;

@protocol AFConversationStorable <NSObject>
- (AFDataStore *)associatedDataStore;
- (BOOL)isVirgin;
- (long long)presentationState;
- (NSString *)aceCommandIdentifier;
- (AFDialogPhase *)dialogPhase;
- (AceObject *)aceObject;
- (NSUUID *)revisionIdentifier;
- (long long)type;
- (NSUUID *)identifier;
@end

