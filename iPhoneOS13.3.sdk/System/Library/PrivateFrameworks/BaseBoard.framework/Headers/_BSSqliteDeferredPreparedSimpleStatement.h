//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/_BSSqlitePreparedSimpleStatement.h>

@class NSString;

@interface _BSSqliteDeferredPreparedSimpleStatement : _BSSqlitePreparedSimpleStatement
{
    NSString *_deferredSql;
}

// - (void).cxx_destruct;
- (BOOL)executeWithBindings:(id)arg1 resultRowHandler:(id /* CDUnknownBlockType */)arg2 error:(out id )arg3;
- (id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2;

@end

