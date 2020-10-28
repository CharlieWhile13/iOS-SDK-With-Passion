//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFRecordStorageProvider-Protocol.h>

@interface WFFileStorageProvider : NSObject <WFRecordStorageProvider>
{
}

+ (id)sharedProvider;
- (id)fileWithDescriptor:(id)arg1 error:(id )arg2;
- (BOOL)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id )arg3;
- (BOOL)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id )arg3;
- (id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id )arg3;
- (id)recordWithDescriptor:(id)arg1 error:(id )arg2;

@end

