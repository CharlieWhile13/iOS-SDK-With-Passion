//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/CoreDAVDeleteTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVMkcolTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVMoveTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPutTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVMoveTaskDelegate>
{
    int _phase;
    NSURL *_folderURL;
    NSString *_previousCTag;
    NSString *_nextCTag;
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    NSString *_previousPTag;
    NSString *_nextPTag;
    NSArray *_actions;
    NSUInteger _multiGetBatchSize;
    NSMutableArray *_unsubmittedTasks;
    NSURL *_addMemberURL;
    BOOL _useMultiGet;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_leafURLToETag;
    NSMutableArray *_childCollectionURL;
    Class _appSpecificDataItemClass;
    Class _appSpecificContainerItemClass;
    BOOL _syncItemOrder;
    NSMutableDictionary *_folderURLToChildrenURLOrder;
    BOOL _preflightCTag;
}

@property(retain, nonatomic) NSString *nextCTag; // @synthesize nextCTag=_nextCTag;
@property(readonly, nonatomic) NSDictionary *folderURLToChildrenURLOrder; // @synthesize folderURLToChildrenURLOrder=_folderURLToChildrenURLOrder;
@property(retain, nonatomic) NSString *previousSyncToken; // @synthesize previousSyncToken=_previousSyncToken;
@property(nonatomic) BOOL preflightCTag; // @synthesize preflightCTag=_preflightCTag;
@property(readonly, nonatomic) NSString *previousCTag; // @synthesize previousCTag=_previousCTag;
@property(readonly, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property(nonatomic) NSUInteger multiGetBatchSize; // @synthesize multiGetBatchSize=_multiGetBatchSize;
// - (void).cxx_destruct;
- (BOOL)shouldSyncChildWithResourceType:(id)arg1;
- (id)dataContentType;
- (id)copyFolderMultiGetTaskWithURLs:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)_copyContainerParserMappings;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (void)moveTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (void)_folderModTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (BOOL)isWhitelistedError:(id)arg1;
- (void)syncAway;
- (void)startTaskGroup;
- (void)_getDataPayloads;
- (void)_getItemTags;
- (void)_getTopFolderTags;
- (void)_pushActions;
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)arg1;
- (NSUInteger)_submitTasks;
- (void)cancelTaskGroup;
- (void)bailWithError:(id)arg1;
- (void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2;
- (void)_tearDownAllUnsubmittedTasks;
- (void)taskGroupWillCancelWithError:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;

@end

