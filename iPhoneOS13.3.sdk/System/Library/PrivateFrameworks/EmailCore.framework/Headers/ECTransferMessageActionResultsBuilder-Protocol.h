//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalMessageActionResultsBuilder-Protocol.h>

@class NSArray, NSDictionary;

@protocol ECTransferMessageActionResultsBuilder <ECLocalMessageActionResultsBuilder>
@property(copy, nonatomic) NSDictionary *downloadedDataByCopyItems;
@property(copy, nonatomic) NSArray *createdServerMessages;
@property(copy, nonatomic) NSArray *failedItems;
@property(copy, nonatomic) NSArray *completedItems;
@property(nonatomic) long long phaseForResults;
@end

