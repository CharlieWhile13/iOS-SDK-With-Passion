//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class NSString;

@interface CRKFetchChaptersOperation : CATOperation
{
    NSString *mPath;
    NSString *mIdentifierType;
    NSString *mIdentifier;
}

// - (void).cxx_destruct;
- (void)parseTableOfContentsOperationDidFinish:(id)arg1;
- (void)parseOFPPackageContentsOperationDidFinish:(id)arg1;
- (void)parseOPFFilePathOperationDidFinish:(id)arg1;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3;
- (id)initWithBook:(id)arg1;
- (id)initWithRequest:(id)arg1 error:(id )arg2;

@end

