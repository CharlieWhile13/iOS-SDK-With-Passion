//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumber.h>

#import <ContentKit/WFJSONObject-Protocol.h>
#import <ContentKit/WFJavaScriptCoreBridgeableObject-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface NSNumber (WFNaming) <WFNaming, WFPropertyListObject, WFSerializableContent, WFJavaScriptCoreBridgeableObject, WFJSONObject>
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wfSerializedRepresentation;
@end

