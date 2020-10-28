//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMutableGadgetSpecManager-Protocol.h>

@class NSMutableSet, PXExtendedTraitCollection, PXGadgetSpec;

@interface PXGadgetSpecManager : PXObservable <PXChangeObserver, PXMutableGadgetSpecManager>
{
    PXGadgetSpec *_currentGadgetSpec;
    Class _gadgetSpecClass;
    long long _scrollAxis;
    PXExtendedTraitCollection *_traitCollection;
    NSMutableSet *_updatedGadgets;
}

@property(retain, nonatomic) NSMutableSet *updatedGadgets; // @synthesize updatedGadgets=_updatedGadgets;
@property(retain, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(readonly, nonatomic) Class gadgetSpecClass; // @synthesize gadgetSpecClass=_gadgetSpecClass;
@property(retain, nonatomic) PXGadgetSpec *currentGadgetSpec; // @synthesize currentGadgetSpec=_currentGadgetSpec;
// - (void).cxx_destruct;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (id)mutableChangeObject;
- (void)_extendedTraitCollection:(id)arg1 didChange:(NSUInteger)arg2;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)updateGadgetsToSpecIfNeeded:(id)arg1;
- (id)initWithGadgetSpecClass:(Class)arg1 scrollAxis:(long long)arg2 traitCollection:(id)arg3;

@end
