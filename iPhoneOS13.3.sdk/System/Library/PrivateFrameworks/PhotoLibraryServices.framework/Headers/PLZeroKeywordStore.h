//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLZeroKeywordStore : NSObject
{
    NSString *_storePath;
}

+ (id)expectedClasses;
// - (void).cxx_destruct;
- (void)updateZeroKeywordsTo:(id)arg1;
- (id)currentZeroKeywords;
- (void)deleteStore;
- (id)initWithPath:(id)arg1;

@end

