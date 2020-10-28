//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTSectionInfoListBBProvider-Protocol.h>
#import <BulletinDistributorCompanion/BLTSectionInfoObserverDelegate-Protocol.h>
#import <BulletinDistributorCompanion/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class BLTSectionInfoObserver, LSApplicationWorkspace;
@protocol BLTSectionInfoListProviderDelegate, OS_dispatch_queue;

@interface BLTSectionInfoListBBProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoObserverDelegate, BLTSectionInfoListBBProvider>
{
    BLTSectionInfoObserver *_observer;
    LSApplicationWorkspace *_appWorkspace;
    NSObject<OS_dispatch_queue> *_queue;
    id <BLTSectionInfoListProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTSectionInfoListProviderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)applicationIconDidChange:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)sectionInfoObserver:(id)arg1 removedSectionWithSectionID:(id)arg2;
- (void)sectionInfoObserver:(id)arg1 updatedSectionInfoForSectionIDs:(id)arg2;
- (id)sectionInfoForSectionID:(id)arg1;
- (void)reloadSection:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)reloadWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithSettingsGateway:(id)arg1;
- (id)init;

@end

