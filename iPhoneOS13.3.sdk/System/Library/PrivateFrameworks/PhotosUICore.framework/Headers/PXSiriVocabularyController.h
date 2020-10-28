//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class PHFetchResult;
@protocol OS_dispatch_queue;

@interface PXSiriVocabularyController : NSObject <PHPhotoLibraryChangeObserver>
{
    BOOL _needsAlbumsVocabularyUpdate;
    BOOL _needsPeopleVocabularyUpdate;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    PHFetchResult *_albumFetchResult;
    PHFetchResult *_peopleFetchResult;
}

+ (id)sharedManager;
@property(retain, nonatomic) PHFetchResult *peopleFetchResult; // @synthesize peopleFetchResult=_peopleFetchResult;
@property(retain, nonatomic) PHFetchResult *albumFetchResult; // @synthesize albumFetchResult=_albumFetchResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
// - (void).cxx_destruct;
- (void)_onQueueUpdatePeopleVocabulary;
- (id)_localizedTitlesForAssetCollectionFetchResult:(id)arg1;
- (void)_onQueueUpdateAlbumVocabulary;
- (void)updateVocabulary;
- (void)photoLibraryDidChange:(id)arg1;
@property(nonatomic) BOOL needsPeopleVocabularyUpdate; // @synthesize needsPeopleVocabularyUpdate=_needsPeopleVocabularyUpdate;
@property(nonatomic) BOOL needsAlbumsVocabularyUpdate; // @synthesize needsAlbumsVocabularyUpdate=_needsAlbumsVocabularyUpdate;
- (void)dealloc;
- (id)init;

@end

