//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextRowItem : HMFObject
{
    NSUInteger _itemRow;
    NSData *_modelData;
    NSUInteger _modelEncoding;
    NSData *_externalID;
    NSData *_externalData;
}

@property(readonly, nonatomic) NSData *externalData; // @synthesize externalData=_externalData;
@property(readonly, nonatomic) NSData *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) NSUInteger modelEncoding; // @synthesize modelEncoding=_modelEncoding;
@property(readonly, nonatomic) NSData *modelData; // @synthesize modelData=_modelData;
@property(readonly, nonatomic) NSUInteger itemRow; // @synthesize itemRow=_itemRow;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithStatement:(struct sqlite3_stmt )arg1 returning:(NSUInteger)arg2;
- (id)initWithItemRow:(NSUInteger)arg1 externalID:(id)arg2 externalData:(id)arg3 modelEncoding:(NSUInteger)arg4 modelData:(id)arg5;

@end

