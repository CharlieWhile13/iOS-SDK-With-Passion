//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackRow : NSObject
{
    BOOL _hosted;
    BOOL _bounded;
    long long _sectionIndex;
    struct TVRowMetrics _rowMetrics;
}

@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic, getter=isBounded) BOOL bounded; // @synthesize bounded=_bounded;
@property(nonatomic, getter=isHosted) BOOL hosted; // @synthesize hosted=_hosted;
@property(nonatomic) struct TVRowMetrics rowMetrics; // @synthesize rowMetrics=_rowMetrics;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

