//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMWeakReference : NSObject
{
    id _object;
    NSUInteger _objectAddress;
}

+ (id)weakRefWithObject:(id)arg1;
- (id)object;
- (id)initRefWithObject:(id)arg1;
- (id)copyObject;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;

@end

