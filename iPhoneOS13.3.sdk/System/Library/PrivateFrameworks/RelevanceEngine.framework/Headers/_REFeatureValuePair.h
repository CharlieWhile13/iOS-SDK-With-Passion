//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REFeature;

@interface _REFeatureValuePair : NSObject
{
    REFeature *_feature;
    NSUInteger _value;
    NSUInteger _index;
    NSArray *_rootFeatures;
}

@property(readonly, nonatomic) NSArray *rootFeatures; // @synthesize rootFeatures=_rootFeatures;
@property(readonly, nonatomic) NSUInteger index; // @synthesize index=_index;
@property(readonly, nonatomic) NSUInteger value; // @synthesize value=_value;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)initWithFeature:(id)arg1 value:(NSUInteger)arg2 index:(NSUInteger)arg3 rootFeatures:(id)arg4;

@end

