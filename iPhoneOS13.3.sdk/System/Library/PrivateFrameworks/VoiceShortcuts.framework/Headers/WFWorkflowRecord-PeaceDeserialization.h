//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFWorkflowRecord.h>

#import <VoiceShortcuts/VCPBCodable-Protocol.h>

@interface WFWorkflowRecord (PeaceDeserialization) <VCPBCodable>
- (BOOL)loadFromPeaceData:(id)arg1 keyImageData:(id)arg2 error:(id )arg3;
- (id)initWithPeaceCoreDataModel:(id)arg1 error:(id )arg2;
- (id)initWithPeaceCloudKitRecord:(id)arg1 error:(id )arg2;
- (BOOL)writeTo:(id)arg1 error:(id )arg2;
- (BOOL)readFrom:(id)arg1 error:(id )arg2;
@end

