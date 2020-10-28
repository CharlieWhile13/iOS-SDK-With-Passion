//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;
@protocol NTKPhotosReaderDelegate;

@interface NTKPhotosReader : NSObject <NSFastEnumeration>
{
    NSString *_resourceDirectory;
    id <NTKPhotosReaderDelegate> _delegate;
    NSString *_assetCollection;
    NSUInteger _mutationCount;
}

+ (id)readerForMemoriesWithResourceDirectory:(id)arg1;
+ (id)readerForSyncedAlbumWithResourceDirectory:(id)arg1;
+ (id)readerForResourceDirectory:(id)arg1;
@property(nonatomic) NSUInteger mutationCount; // @synthesize mutationCount=_mutationCount;
@property(retain, nonatomic) NSString *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(nonatomic) __weak id <NTKPhotosReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
// - (void).cxx_destruct;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)lastObject;
- (id)firstObject;
- (id)objectAtIndexedSubscript:(NSUInteger)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithResourceDirectory:(id)arg1;

@end

