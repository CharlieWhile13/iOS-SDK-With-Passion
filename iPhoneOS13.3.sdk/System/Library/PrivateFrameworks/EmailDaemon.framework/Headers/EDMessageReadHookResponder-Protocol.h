//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EFSQLRow;
@protocol EDLibraryMessage;

@protocol EDMessageReadHookResponder <NSObject>
- (void)persistenceWillReadMessage:(id <EDLibraryMessage>)arg1 fromRow:(EFSQLRow *)arg2;
@end

