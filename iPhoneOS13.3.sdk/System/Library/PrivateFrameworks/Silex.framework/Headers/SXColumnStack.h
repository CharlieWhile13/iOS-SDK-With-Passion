//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXColumnStack : NSObject
{
    NSArray *_columnStack;
}

@property(readonly, nonatomic) NSArray *columnStack; // @synthesize columnStack=_columnStack;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)rangeInBounds:(NSRange)arg1;
- (id)componentsAfterComponent:(id)arg1;
- (id)allComponentsAfterComponent:(id)arg1;
- (id)componentsBeforeComponent:(id)arg1;
- (id)allComponentsBeforeComponent:(id)arg1;
- (void)addComponentBlueprint:(id)arg1;
- (id)initWithNumberOfColumns:(NSUInteger)arg1;

@end
