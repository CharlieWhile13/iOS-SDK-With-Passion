//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSString;

@interface WFCloudKitWebServiceQueryFilterComparison : WFCloudKitWebServiceQueryFilter
{
    NSString *_recordKey;
    NSUInteger _type;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
// - (void).cxx_destruct;
- (id)stringRepresentationWithRecordType:(id)arg1;

@end

