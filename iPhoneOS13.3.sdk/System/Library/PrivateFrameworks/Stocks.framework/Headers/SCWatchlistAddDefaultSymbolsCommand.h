//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSArray;

@interface SCWatchlistAddDefaultSymbolsCommand : NSObject <SCKZoneCommand>
{
    BOOL _deferUpload;
    NSArray *_symbols;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL deferUpload; // @synthesize deferUpload=_deferUpload;
@property(readonly, copy, nonatomic) NSArray *symbols; // @synthesize symbols=_symbols;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldDeferUpload;
- (void)executeWithZone:(id)arg1;
- (id)initWithSymbols:(id)arg1 deferUpload:(BOOL)arg2;

@end

