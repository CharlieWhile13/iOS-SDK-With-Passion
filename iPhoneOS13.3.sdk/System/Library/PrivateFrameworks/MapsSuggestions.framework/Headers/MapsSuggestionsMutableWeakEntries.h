//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject
{
    NSPointerArray *_array;
    BOOL _dirty;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *strongArray;
@property(readonly, nonatomic) NSUInteger count;
- (id)weakObjectAtIndex:(NSUInteger)arg1;
- (void)addWeakObject:(id)arg1;
- (id)initWithEntries:(NSArray )arg1;
- (id)init;

@end

