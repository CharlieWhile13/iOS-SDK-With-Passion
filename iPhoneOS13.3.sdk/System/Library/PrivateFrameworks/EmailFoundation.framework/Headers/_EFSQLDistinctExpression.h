//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLExpressable-Protocol.h>

@class NSString;
@protocol EFSQLExpressable;

@interface _EFSQLDistinctExpression : NSObject <EFSQLExpressable>
{
    id <EFSQLExpressable> _expression;
}

@property(readonly, nonatomic) id <EFSQLExpressable> expression; // @synthesize expression=_expression;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (id)initWithExpression:(id)arg1;

@end

