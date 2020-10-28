//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString;

@protocol RETrainingSimulationServerInterface <NSObject>
- (void)relevanceEngine:(NSString *)arg1 encodedObjectAtPath:(NSArray *)arg2 completion:(void (^)(NSString *))arg3;
- (void)relevanceEngine:(NSString *)arg1 runActionOfElementWithDescription1:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)gatherDiagnosticLogsForRelevanceEngine:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)fetchAllElementsInRelevanceEngine:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)availableRelevanceEngines:(void (^)(NSArray *, NSError *))arg1;
- (void)relevanceEngine:(NSString *)arg1 performCommand:(NSString *)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)relevanceEngine:(NSString *)arg1 createElementFromDescription:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
@end

