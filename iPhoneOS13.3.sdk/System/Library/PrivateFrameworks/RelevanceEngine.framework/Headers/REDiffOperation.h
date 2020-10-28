//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REDiffOperation : NSObject
{
    NSUInteger _type;
    long long _toIndex;
    long long _fromIndex;
    id _item;
}

+ (id)moveWithItem:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
+ (id)deleteWithItem:(id)arg1 atIndex:(long long)arg2;
+ (id)insertWithItem:(id)arg1 atIndex:(long long)arg2;
+ (id)reloadWithItem:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
@property(readonly, nonatomic) long long fromIndex; // @synthesize fromIndex=_fromIndex;
@property(readonly, nonatomic) long long toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithType:(NSUInteger)arg1 item:(id)arg2 toIndex:(long long)arg3 fromIndex:(long long)arg4;

@end

