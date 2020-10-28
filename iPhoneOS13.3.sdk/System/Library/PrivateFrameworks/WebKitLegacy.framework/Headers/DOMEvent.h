//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMObject.h>

@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent : DOMObject
{
}

- (void)stopImmediatePropagation;
- (void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3;
- (void)preventDefault;
- (void)stopPropagation;
@property BOOL cancelBubble;
@property BOOL returnValue;
@property(readonly) id <DOMEventTarget> srcElement;
- (BOOL)isTrusted;
- (BOOL)defaultPrevented;
@property(readonly) NSUInteger timeStamp;
- (BOOL)composed;
@property(readonly) BOOL cancelable;
@property(readonly) BOOL bubbles;
@property(readonly) unsigned short eventPhase;
@property(readonly) id <DOMEventTarget> currentTarget;
@property(readonly) id <DOMEventTarget> target;
@property(readonly, copy) NSString *type;
- (void)dealloc;
- (void)initEvent:(id)arg1:(BOOL)arg2:(BOOL)arg3;

@end
