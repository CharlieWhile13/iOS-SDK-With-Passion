//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REHTMLElement.h>

@class NSArray;

@interface REHTMLParentElement : REHTMLElement
{
    REHTMLElement *_parent;
    NSArray *_children;
}

// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)addChildren:(id)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;
- (id)attributes;
- (id)elementBySettingClasses:(id)arg1;
- (id)classes;
- (id)_encodedData;
- (id)initWithParents:(id)arg1 children:(id)arg2;

@end

