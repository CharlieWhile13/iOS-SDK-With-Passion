//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPData, TSPObjectContext, TSUFlushingManager, TSUWeakReference;

__attribute__((visibility("hidden")))
@interface TSDImageProvider : NSObject
{
    int mLoadState;
    TSPData *mImageData;
    TSUWeakReference *mObjectContextReference;
    _Atomic int mRetainCount;
    _Atomic int mOwnerCount;
    TSUFlushingManager *mFlushingManager;
    _Atomic int mInterest;
}

+ (id)allocWithZone:(_NSZone )arg1;
@property(nonatomic) int i_loadState; // @synthesize i_loadState=mLoadState;
- (NSUInteger)retainCount;
- (oneway void)release;
- (id)retain;
- (void)ownerAccess;
- (void)removeOwner;
- (void)addOwner;
- (void)setFlushingManager:(id)arg1;
- (void)flush;
- (void)removeInterest;
- (void)addInterest;
- (int)interest;
@property(readonly, nonatomic) NSUInteger i_flushableMemoryEstimate;
@property(readonly, nonatomic) BOOL i_hasFlushableContent;
- (void)drawImageInContext:(CGContext )arg1 rect:(CGRect)arg2;
@property(readonly, nonatomic) BOOL isError;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) NSUInteger imageGamut;
@property(readonly, nonatomic) CGSize dpiAdjustedNaturalSize;
@property(readonly, nonatomic) CGSize naturalSize;
@property(readonly, nonatomic) __weak TSPObjectContext *objectContext;
@property(readonly, retain, nonatomic) TSPData *imageData;
- (void)dealloc;
- (void)i_commonInit;
- (id)initWithImageData:(id)arg1;

@end

