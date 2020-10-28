//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDictionary, NSNumber, NSString;
@protocol SAAceSerializable;

@interface SAAceView : SABaseAceObject <SAAceSerializable>
{
}

+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceView;
@property(copy, nonatomic) NSString *viewId;
@property(copy, nonatomic) NSString *speakableText;
@property(copy, nonatomic) NSDictionary *speakableContextInfo;
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;
@property(copy, nonatomic) NSNumber *deferredRendering;
@property(retain, nonatomic) id <SAAceSerializable> context;
@property(nonatomic) BOOL canUseServerTTS;
@property(nonatomic) BOOL canBeRefreshed;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

