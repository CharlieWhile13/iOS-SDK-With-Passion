//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DESRecipe, DESRecipeEvaluationSession, DESRecordSet, NSArray, NSData, NSDictionary, NSURL;

@protocol DESRecipeEvaluation <NSObject>

@optional
- (void)performEvaluation:(DESRecipeEvaluationSession *)arg1;
- (NSDictionary *)evaluateRecipe:(DESRecipe *)arg1 matchingRecordSet:(DESRecordSet *)arg2 binaryResult:(id )arg3 error:(id )arg4;
- (NSDictionary *)evaluateRecipe:(DESRecipe *)arg1 matchingRecordSet:(DESRecordSet *)arg2 error:(id )arg3;
- (NSDictionary *)serverSafeRecordInfoWithRecordInfo:(NSDictionary *)arg1;
- (BOOL)shouldDownloadAttachmentWithURL:(NSURL *)arg1 recipe:(NSDictionary *)arg2 recordInfo:(NSDictionary *)arg3;
- (NSDictionary *)telemetryWithRecordSet:(DESRecordSet *)arg1;
- (NSDictionary *)evaluateRecipe:(NSDictionary *)arg1 recordInfo:(NSDictionary *)arg2 recordData:(NSData *)arg3 attachments:(NSArray *)arg4 error:(id )arg5;
@end

