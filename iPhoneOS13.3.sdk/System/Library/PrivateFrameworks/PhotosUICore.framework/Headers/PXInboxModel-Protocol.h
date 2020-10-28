//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate, NSString;

@protocol PXInboxModel <NSObject, NSCopying>
@property(readonly, nonatomic) NSArray *leftPreviewItems;
@property(nonatomic, getter=isSeen) BOOL seen;
@property(readonly, nonatomic) BOOL userIsSender;
@property(readonly, copy, nonatomic) NSArray *senderNames;
@property(readonly, nonatomic) NSUInteger assetsCount;
@property(readonly, copy, nonatomic) NSString *inboxModelTitle;
@property(readonly, nonatomic) long long inboxModelType;
@property(readonly, nonatomic) NSDate *creationDate;

@optional
@property(readonly, nonatomic) NSString *keyCommentGUID;
@property(readonly, nonatomic) NSString *ownerEmail;
@property(readonly, nonatomic) NSString *ownerLastName;
@property(readonly, nonatomic) NSString *ownerFirstName;
@property(readonly, nonatomic) NSArray *assetsForOneUp;
- (void)fetchLeftPreviewItemsWithCompletion:(void (^)(NSArray *))arg1;
@end

