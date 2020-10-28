//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDClientProtocol-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDWorkerProtocol-Protocol.h>

@class NSString;
@protocol DEDClientProtocol, DEDWorkerProtocol, OS_os_log;

@interface DEDLocalTransport : NSObject <DEDClientProtocol, DEDWorkerProtocol>
{
    id <DEDClientProtocol> _clientDelegate;
    id <DEDWorkerProtocol> _workerDelegate;
    NSObject<OS_os_log> *_log;
}

@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak id <DEDWorkerProtocol> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
@property __weak id <DEDClientProtocol> clientDelegate; // @synthesize clientDelegate=_clientDelegate;
// - (void).cxx_destruct;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)didCancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)pongSession:(id)arg1;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)cancelNotificationForSession:(id)arg1;
- (void)scheduleNotificationForSession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (void)uploadProgress:(NSUInteger)arg1 total:(NSUInteger)arg2 session:(id)arg3;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)pingSession:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithWorkerDelegate:(id)arg1;
- (id)initWithClientDelegate:(id)arg1;
- (long long)transportType;

@end

