//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>
#import <WorkflowKit/WFSortableGalleryObject-Protocol.h>

@class CKRecordID, NSArray, NSDate, NSString;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying>
{
    CKRecordID *_identifier;
    NSString *_name;
    NSString *_collectionDescription;
    NSArray *_workflows;
    NSDate *_modifiedAt;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

+ (id)properties;
+ (id)recordType;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSDate *modifiedAt; // @synthesize modifiedAt=_modifiedAt;
@property(readonly, nonatomic) NSArray *workflows; // @synthesize workflows=_workflows;
@property(readonly, nonatomic) NSString *collectionDescription; // @synthesize collectionDescription=_collectionDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (NSUInteger)referenceActionForKey:(id)arg1;

@end

