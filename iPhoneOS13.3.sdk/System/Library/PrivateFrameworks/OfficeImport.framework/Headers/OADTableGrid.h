//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableGrid : NSObject
{
    NSMutableArray *mColumns;
}

// - (void).cxx_destruct;
- (id)description;
- (id)addColumn;
- (id)columnAtIndex:(NSUInteger)arg1;
- (NSUInteger)columnCount;
- (id)init;
- (void)flipColumnsRTL;

@end

