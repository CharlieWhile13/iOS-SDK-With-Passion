//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAutocompleteFilter-Protocol.h>

@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter>
{
    NSUInteger _types;
}

@property(readonly, nonatomic) NSUInteger types; // @synthesize types=_types;
- (BOOL)applyToAutocompleteParameters:(id)arg1 error:(id )arg2;
- (id)initWithResultTypes:(NSUInteger)arg1;
- (id)init;

@end

