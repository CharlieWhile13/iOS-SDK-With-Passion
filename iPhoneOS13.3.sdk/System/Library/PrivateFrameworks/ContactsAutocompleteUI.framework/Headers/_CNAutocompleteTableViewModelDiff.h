//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface _CNAutocompleteTableViewModelDiff : NSObject
{
    NSIndexSet *_changedRows;
    NSIndexSet *_deletedRows;
    NSIndexSet *_insertedRows;
}

@property(retain, nonatomic) NSIndexSet *insertedRows; // @synthesize insertedRows=_insertedRows;
@property(retain, nonatomic) NSIndexSet *deletedRows; // @synthesize deletedRows=_deletedRows;
@property(retain, nonatomic) NSIndexSet *changedRows; // @synthesize changedRows=_changedRows;
// - (void).cxx_destruct;

@end

