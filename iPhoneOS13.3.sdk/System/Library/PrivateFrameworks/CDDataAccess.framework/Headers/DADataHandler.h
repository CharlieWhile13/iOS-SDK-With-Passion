//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DADataHandler : NSObject
{
    void _container;
    NSString *_changeTrackingID;
}

+ (id)newDataHandlerForDataclass:(long long)arg1 container:(void )arg2 changeTrackingID:(id)arg3;
@property(copy, nonatomic) NSString *changeTrackingID; // @synthesize changeTrackingID=_changeTrackingID;
@property(nonatomic) void container; // @synthesize container=_container;
// - (void).cxx_destruct;
- (id)getDAExceptionObjectWithLocalItem:(void )arg1 originalEvent:(id)arg2 account:(id)arg3;
- (id)getDAObjectWithLocalItem:(void )arg1 serverId:(id)arg2 account:(id)arg3;
- (BOOL)closeDBAndSave:(BOOL)arg1;
- (void)openDB;
- (void)drainSuperfluousChanges;
- (BOOL)wipeServerIds;
- (void)drainContainer;
- (id)copyOfAllLocalObjectsInContainer;
- (BOOL)saveContainer;
- (void )copyLocalObjectFromId:(int)arg1;
- (int)getIdFromLocalObject:(void )arg1;
- (long long)dataclass;
- (void)dealloc;
- (id)initWithContainer:(void )arg1 changeTrackingID:(id)arg2;

@end

