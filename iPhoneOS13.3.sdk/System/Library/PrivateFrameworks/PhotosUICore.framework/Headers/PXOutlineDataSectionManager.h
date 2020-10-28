//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDataSectionManager.h>

@class NSDictionary;
@protocol PXOutlineDataSectionManagerDelegate;

@interface PXOutlineDataSectionManager : PXDataSectionManager
{
    NSDictionary *_dataSectionManagersByDataSectionObjects;
    id <PXOutlineDataSectionManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <PXOutlineDataSectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)createDataSection;
- (void)rearrangeSectionContent;
- (id)childDataSectionManagerForOutlineObject:(id)arg1;
- (id)_changeDetailsForNewDataSection;

@end
