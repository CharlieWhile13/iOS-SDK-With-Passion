//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9Coherence18ObjCRenameSequence : NSObject
{
    MISSING_TYPE *renameSequence;
    MISSING_TYPE *renameAddedBySequence;
}

// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)addAddedByVersion:(id)arg1;
- (void)addAddedByReplica:(id)arg1 range:(NSRange)arg2;
- (void)addWithReplica:(id)arg1 range:(NSRange)arg2;
@property(nonatomic, readonly) BOOL isEmpty;

@end

