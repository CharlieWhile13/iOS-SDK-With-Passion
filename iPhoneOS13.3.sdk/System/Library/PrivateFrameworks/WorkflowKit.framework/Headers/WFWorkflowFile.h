//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowQuarantine;

@interface WFWorkflowFile : NSObject <WFRecordStorage, NSItemProviderWriting>
{
    NSString *_name;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    WFWorkflowQuarantine *_quarantine;
    NSMutableDictionary *_rootObject;
    WFFileRepresentation *_file;
}

+ (id)writableTypeIdentifiersForItemProvider;
@property(readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
@property(readonly, nonatomic) NSMutableDictionary *rootObject; // @synthesize rootObject=_rootObject;
@property(retain, nonatomic) WFWorkflowQuarantine *quarantine; // @synthesize quarantine=_quarantine;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)migrateTypesForImport;
- (BOOL)migrateRootObject;
- (BOOL)isEqual:(id)arg1;
- (BOOL)writeToOutputStream:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSDictionary *rootObjectForExport;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)fileDataWithError:(id )arg1;
- (id)writeToDiskWithError:(id )arg1;
@property(copy, nonatomic) NSString *minimumClientVersion;
@property(copy, nonatomic) NSString *lastMigratedClientVersion;
@property(copy, nonatomic) NSArray *importQuestions;
@property(copy, nonatomic) NSArray *actions;
@property(copy, nonatomic) NSArray *inputClasses;
@property(copy, nonatomic) NSArray *workflowTypes;
@property(retain, nonatomic) WFWorkflowIcon *icon;
- (id)recordRepresentationWithError:(id )arg1;
@property(readonly, nonatomic) NSUInteger estimatedSize;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 performMigration:(BOOL)arg2 error:(id )arg3;
- (id)initWithDictionary:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3;
- (id)initWithDictionary:(id)arg1 name:(id)arg2;
- (id)initWithFileData:(id)arg1 name:(id)arg2 error:(id )arg3;
- (id)init;

@end

