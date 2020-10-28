//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface RBSStateCaptureSetSegment : NSObject
{
    id <BSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

// - (void).cxx_destruct;
- (void)dealloc;
- (BOOL)containsItem:(id)arg1;
- (NSUInteger)count;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1 withLength:(NSUInteger)arg2;
- (id)_stateCapture;
- (id)init;
@property(readonly, nonatomic) NSSet *items;

@end

