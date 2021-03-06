//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCKeyValueStore.h>

#import <NewsToday/FRRingBufferContainer-Protocol.h>

@interface FCKeyValueStore (FRRingBufferContainer) <FRRingBufferContainer>
- (double)maxForKey:(id)arg1;
- (double)minForKey:(id)arg1;
- (BOOL)hasMaxForKey:(id)arg1;
- (BOOL)hasMinForKey:(id)arg1;
- (void)setRingBuffers:(id)arg1;
- (id)ringBufferForKey:(id)arg1;
- (id)ringBufferForKey:(id)arg1 capacity:(NSUInteger)arg2;
@end

