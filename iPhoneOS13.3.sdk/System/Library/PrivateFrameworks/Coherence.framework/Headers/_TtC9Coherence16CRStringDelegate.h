//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Coherence/TTMergeableStringDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9Coherence16CRStringDelegate : NSObject <TTMergeableStringDelegate>
{
    MISSING_TYPE *edits;
}

// - (void).cxx_destruct;
- (id)init;
- (void)edited:(NSUInteger)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (void)beginEditing;

@end

