//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REScriptASTObjectBuilder.h>

@interface REScriptASTFeatureBuilder : REScriptASTObjectBuilder
{
}

- (BOOL)_loadIndexFromNode:(id)arg1 index:(NSUInteger )arg2 error:(id )arg3;
- (id)_buildTransformedFeature:(id)arg1 features:(id)arg2 node:(id)arg3 error:(id )arg4;
- (id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id )arg2;
- (id)buildObjectWithFunctionNode:(id)arg1 error:(id )arg2;
- (id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id )arg3;
- (id)buildObjectWithIdentifierNode:(id)arg1 error:(id )arg2;
- (id)objectTypeErrorDescription;

@end

