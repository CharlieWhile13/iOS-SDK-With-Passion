//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivity-Protocol.h>

@class NSString, UIPasteboard;

@interface SXPasteboardActionActivity : NSObject <SXActionActivity>
{
    NSString *_label;
    NSUInteger _type;
    UIPasteboard *_pasteboard;
    NSString *_string;
}

@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, copy, nonatomic) UIPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (void)invokeWithAction:(id)arg1 invocationMethod:(NSUInteger)arg2;
- (id)initWithLabel:(id)arg1 type:(NSUInteger)arg2 pasteboard:(id)arg3 string:(id)arg4;

@end

