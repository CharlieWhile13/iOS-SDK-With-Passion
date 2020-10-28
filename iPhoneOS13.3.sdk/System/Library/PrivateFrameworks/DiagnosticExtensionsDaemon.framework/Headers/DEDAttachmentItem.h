//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface DEDAttachmentItem : NSObject <DEDSecureArchiving>
{
    NSString *_deviceID;
    NSString *_displayName;
    NSDate *_modificationDate;
    NSNumber *_fileSize;
    NSURL *_attachedPath;
}

+ (id)archivedClasses;
+ (id)itemWithDEItem:(id)arg1;
+ (id)itemWithDictionary:(id)arg1;
+ (id)itemWithURL:(id)arg1;
@property(retain) NSURL *attachedPath; // @synthesize attachedPath=_attachedPath;
@property(retain) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isLocal;
- (id)serialize;

@end

