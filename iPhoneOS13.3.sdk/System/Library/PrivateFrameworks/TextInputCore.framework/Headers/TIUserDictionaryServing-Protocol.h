//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSUUID;

@protocol TIUserDictionaryServing <NSObject>
@property(readonly, copy, nonatomic) NSUUID *userDictionaryUUID;
- (void)startServer;
- (void)getPhraseShortcutPairs:(void (^)(NSArray *))arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(void (^)(NSArray *))arg1;
@end

