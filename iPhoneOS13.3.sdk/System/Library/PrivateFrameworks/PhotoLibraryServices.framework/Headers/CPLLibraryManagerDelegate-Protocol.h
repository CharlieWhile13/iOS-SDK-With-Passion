//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CPLLibraryManager, CPLResource, NSString;

@protocol CPLLibraryManagerDelegate <NSObject>
- (void)libraryManagerHasChangesToPull:(CPLLibraryManager *)arg1;
- (void)libraryManagerDidStartSynchronization:(CPLLibraryManager *)arg1;
- (void)libraryManagerStatusDidChange:(CPLLibraryManager *)arg1;

@optional
- (void)libraryManager:(CPLLibraryManager *)arg1 provideLocalResource:(CPLResource *)arg2 recordClass:(Class)arg3 completionHandler:(void (^)(CPLResource *, NSUInteger))arg4;
- (NSString *)displayableNameForLibraryManager:(CPLLibraryManager *)arg1;
- (void)libraryManagerHasStatusChanges:(CPLLibraryManager *)arg1;
- (void)libraryManagerDidChangeConfiguration:(CPLLibraryManager *)arg1;
@end
