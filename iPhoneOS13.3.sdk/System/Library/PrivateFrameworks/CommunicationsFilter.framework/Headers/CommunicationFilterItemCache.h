//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CommunicationFilterItem;

__attribute__((visibility("hidden")))
@interface CommunicationFilterItemCache : NSObject
{
    CommunicationFilterItem *_filterItem;
    long long _isInList;
}

@property(nonatomic) long long isInList; // @synthesize isInList=_isInList;
- (BOOL)matchesItem:(id)arg1;
- (void)dealloc;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;

@end

