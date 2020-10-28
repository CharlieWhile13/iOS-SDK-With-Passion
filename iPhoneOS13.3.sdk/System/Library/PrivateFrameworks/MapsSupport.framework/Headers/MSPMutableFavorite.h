//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPFavorite-Protocol.h>
#import <MapsSupport/MSPIdentifiableFavorite-Protocol.h>
#import <MapsSupport/MSPMutableObject-Protocol.h>

@class MSPBookmarkStorage, NSString, NSUUID;

@interface MSPMutableFavorite : NSObject <MSPFavorite, MSPMutableObject, MSPIdentifiableFavorite>
{
    BOOL _immutable;
    NSUUID *_storageIdentifier;
    MSPBookmarkStorage *_bookmarkStorage;
}

+ (id)mutableFavoriteForBookmarkStorage:(id)arg1;
+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
@property(readonly, nonatomic, getter=_isImmutable) BOOL immutable; // @synthesize immutable=_immutable;
@property(readonly, nonatomic) MSPBookmarkStorage *bookmarkStorage; // @synthesize bookmarkStorage=_bookmarkStorage;
@property(readonly, nonatomic) NSUUID *storageIdentifier; // @synthesize storageIdentifier=_storageIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)debugTitle;
- (BOOL)isUserVisibleDuplicateOfFavorite:(id)arg1;
- (void)_noteWillMutate;
- (void)_markImmutable;
- (id)persisterOnlyBookmarkStorage;
- (id)copyIfValidWithError:(out id )arg1;
- (id)transferToImmutableIfValidWithError:(out id )arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (void)ifMutablePlace:(id /* CDUnknownBlockType */)arg1 ifMutableRoute:(id /* CDUnknownBlockType */)arg2 ifMutableRegion:(id /* CDUnknownBlockType */)arg3 ifMutableTransitLine:(id /* CDUnknownBlockType */)arg4;
- (void)ifPlace:(id /* CDUnknownBlockType */)arg1 ifRoute:(id /* CDUnknownBlockType */)arg2 ifRegion:(id /* CDUnknownBlockType */)arg3 ifTransitLine:(id /* CDUnknownBlockType */)arg4;
- (id)initWithBookmarkStorage:(id)arg1;
- (id)init;
- (id)abridgedBookmarkStorageForSpotlightStorage;

@end

