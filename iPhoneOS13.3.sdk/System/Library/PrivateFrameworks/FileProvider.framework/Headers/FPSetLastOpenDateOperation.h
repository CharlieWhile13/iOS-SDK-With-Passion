//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@class NSArray, NSDate;

@interface FPSetLastOpenDateOperation : FPTransformOperation
{
    NSArray *_items;
    NSDate *_date;
}

// - (void).cxx_destruct;
- (id)fp_prettyDescription;
- (NSUInteger)transformItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)initWithItems:(id)arg1 date:(id)arg2;
- (id)replicateForItems:(id)arg1;

@end

