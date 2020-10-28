//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKPCSDiagnosticInformation, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation
{
    NSString *_identityStatus;
    NSDictionary *_invalidPCSByZoneID;
    NSDictionary *_validPCSByZoneID;
    NSArray *_recordZoneIDs;
    CKPCSDiagnosticInformation *_pcsDiagnosticInfo;
}

@property(retain, nonatomic) CKPCSDiagnosticInformation *pcsDiagnosticInfo; // @synthesize pcsDiagnosticInfo=_pcsDiagnosticInfo;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(retain, nonatomic) NSDictionary *validPCSByZoneID; // @synthesize validPCSByZoneID=_validPCSByZoneID;
@property(retain, nonatomic) NSDictionary *invalidPCSByZoneID; // @synthesize invalidPCSByZoneID=_invalidPCSByZoneID;
@property(retain, nonatomic) NSString *identityStatus; // @synthesize identityStatus=_identityStatus;
// - (void).cxx_destruct;
- (void)main;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

