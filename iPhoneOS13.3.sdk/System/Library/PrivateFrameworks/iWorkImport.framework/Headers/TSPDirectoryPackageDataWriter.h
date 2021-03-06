//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPPackageDataWriter-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSPDirectoryPackageDataWriter : NSObject <TSPPackageDataWriter>
{
    NSURL *_URL;
}

// - (void).cxx_destruct;
- (BOOL)flushPendingWritesReturningError:(id )arg1;
- (CGDataConsumer )newCGDataConsumerAtRelativePath:(id)arg1;
- (BOOL)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(BOOL)arg3 error:(id )arg4;
- (id)targetDataURLForPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

