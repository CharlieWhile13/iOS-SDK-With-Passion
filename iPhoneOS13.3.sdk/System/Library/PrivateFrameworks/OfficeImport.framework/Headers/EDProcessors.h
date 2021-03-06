//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject
{
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}

// - (void).cxx_destruct;
- (void)applyProcessorsWithSheet:(id)arg1;
- (void)markObject:(id)arg1 processor:(Class)arg2;
- (void)removeAllObjects;
- (void)removeProcessorClass:(Class)arg1;
- (BOOL)hasProcessors;
- (void)addProcessorClass:(Class)arg1;
- (id)initWithWorkbook:(id)arg1;

@end

