//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKOperationInfo, NSDate, NSNumber;

@interface CKDOperationInfoMetadata : NSObject
{
    CKOperationInfo *_operationInfo;
    NSDate *_lastAttemptDate;
    NSNumber *_retryNumber;
}

@property(retain, nonatomic) NSNumber *retryNumber; // @synthesize retryNumber=_retryNumber;
@property(retain, nonatomic) NSDate *lastAttemptDate; // @synthesize lastAttemptDate=_lastAttemptDate;
@property(retain, nonatomic) CKOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
// - (void).cxx_destruct;

@end

