//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/GKExtensionHostViewControllerDelegate-Protocol.h>

@class GKExtensionHostViewController, NSString;
@protocol OS_dispatch_queue;

@interface GKExtensionManager : NSObject <GKExtensionHostViewControllerDelegate>
{
    long long _extensionLoadState;
    GKExtensionHostViewController *_extensionHostViewController;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_extensionIdentifier;
}

@property(copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) GKExtensionHostViewController *extensionHostViewController; // @synthesize extensionHostViewController=_extensionHostViewController;
// - (void).cxx_destruct;
- (void)extensionDidTerminateWithError:(id)arg1;
- (BOOL)needToLoadExtension;
@property(nonatomic) long long extensionLoadState; // @synthesize extensionLoadState=_extensionLoadState;
- (id)tournamentExtensionViewController;
- (void)instantiateViewControllerWithHost:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithExtensionBundleIdentifer:(id)arg1 host:(id)arg2;

@end

