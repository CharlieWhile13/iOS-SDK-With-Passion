//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol SFAirDropBrowserBatchDelegate, SFAirDropBrowserDelegate, SFAirDropBrowserDiffableDelegate;

@interface SFAirDropBrowser : NSObject
{
    struct __SFBrowser _browser;
    NSMutableDictionary *_nodes;
    BOOL _shouldDeliverEmptyUpdates;
    NSString *_sessionID;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
    id <SFAirDropBrowserBatchDelegate> _batchDelegate;
    NSString *_sendingAppBundleID;
    NSArray *_urlsBeingShared;
    NSArray *_photosAssetIDs;
    id <SFAirDropBrowserDiffableDelegate> _diffableDelegate;
    NSMutableDictionary *_nodeIDToNode;
}

@property(readonly, nonatomic) NSMutableDictionary *nodeIDToNode; // @synthesize nodeIDToNode=_nodeIDToNode;
@property __weak id <SFAirDropBrowserDiffableDelegate> diffableDelegate; // @synthesize diffableDelegate=_diffableDelegate;
@property(copy, nonatomic) NSArray *photosAssetIDs; // @synthesize photosAssetIDs=_photosAssetIDs;
@property(copy, nonatomic) NSArray *urlsBeingShared; // @synthesize urlsBeingShared=_urlsBeingShared;
@property(copy, nonatomic) NSString *sendingAppBundleID; // @synthesize sendingAppBundleID=_sendingAppBundleID;
@property __weak id <SFAirDropBrowserBatchDelegate> batchDelegate; // @synthesize batchDelegate=_batchDelegate;
@property __weak id <SFAirDropBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
// - (void).cxx_destruct;
- (void)getChangedIndexesForClientPeopleList:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)start;
- (void)dealloc;
- (id)init;

@end

