//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCHCExpectation-Protocol.h>

@class CKDatabase, CKRecordZoneID, NSArray;

@interface FCHCZoneContentsExpectation : NSObject <FCHCExpectation>
{
    CKDatabase *_database;
    CKRecordZoneID *_zoneID;
    NSArray *_recordTests;
}

@property(copy, nonatomic) NSArray *recordTests; // @synthesize recordTests=_recordTests;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (void)validate;

@end

