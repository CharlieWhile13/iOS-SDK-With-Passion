//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SACreateVOXListItem : AceObject <SAAceSerializable>
{
}

+ (id)createVOXListItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createVOXListItem;
@property(copy, nonatomic) NSString *speakableStandalone;
@property(copy, nonatomic) NSString *speakableInSequence;
@property(copy, nonatomic) NSArray *displayHints;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

