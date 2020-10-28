//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob
{
    NSDictionary *_metadata;
}

+ (void)updateAlbumMetadata:(id)arg1;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
// - (void).cxx_destruct;
- (id)_argumentsDictionaryFromXPCEvent:(id)arg1;
- (id)_argumentsDictionaryAsData:(id)arg1;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

