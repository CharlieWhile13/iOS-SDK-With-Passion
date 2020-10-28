//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSMutableArray, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem
{
    NSMutableArray *_orderedResponses;
    CoreDAVLeafItem *_responseDescription;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVLeafItem *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) NSMutableArray *orderedResponses; // @synthesize orderedResponses=_orderedResponses;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *responses;
- (void)addResponse:(id)arg1;
- (id)description;
- (id)init;

@end

