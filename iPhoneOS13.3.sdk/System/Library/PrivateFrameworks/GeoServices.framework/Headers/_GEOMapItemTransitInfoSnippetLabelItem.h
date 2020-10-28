//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitLabelItem-Protocol.h>

@class NSString;
@protocol GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject <GEOTransitLabelItem>
{
    NSUInteger _type;
    NSString *_labelString;
    id <GEOTransitArtworkDataSource> _labelArtwork;
}

@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> labelArtwork; // @synthesize labelArtwork=_labelArtwork;
@property(readonly, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithType:(NSUInteger)arg1 labelString:(id)arg2 labelArtwork:(id)arg3;

@end

