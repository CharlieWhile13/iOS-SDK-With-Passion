//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SXComponentInserter, SXComponentInsertionCacheValidator;

@interface SXComponentInsertionCacheItem : NSObject
{
    id <SXComponentInserter> _inserter;
    id <SXComponentInsertionCacheValidator> _validator;
    NSArray *_results;
}

@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) id <SXComponentInsertionCacheValidator> validator; // @synthesize validator=_validator;
@property(readonly, nonatomic) id <SXComponentInserter> inserter; // @synthesize inserter=_inserter;
// - (void).cxx_destruct;
- (id)initWithInserter:(id)arg1 validator:(id)arg2 results:(id)arg3;

@end

