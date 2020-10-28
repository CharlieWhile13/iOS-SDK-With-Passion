//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGSeasonMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localDate;
    NSUInteger _type;
}

+ (NSUInteger)numberOfPotentialMemoriesWithGraph:(id)arg1;
+ (BOOL)isMoment:(id)arg1 duringSeason:(id)arg2;
+ (id)seasonNodeForMomentNode:(id)arg1;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
// - (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithController:(id)arg1;
- (id)_seasonInHistoryPotentialMemories;
- (id)_lastSeasonPotentialMemory;
- (id)_potentialMemoryForMomentNodes:(id)arg1 seasonNode:(id)arg2 category:(NSUInteger)arg3;
- (void)seasonInHistoryMomentNodesForLocalDate:(id)arg1 resultBlock:(id /* CDUnknownBlockType */)arg2;
- (void)lastSeasonMomentNodesForLocalDate:(id)arg1 resultBlock:(id /* CDUnknownBlockType */)arg2;

@end

