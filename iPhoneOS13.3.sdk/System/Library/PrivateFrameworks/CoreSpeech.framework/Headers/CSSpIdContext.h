//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSAsset, NSDictionary, NSString;

@interface CSSpIdContext : NSObject
{
    NSString *_uniqueUttTag;
    NSUInteger _activeChannel;
    CSAsset *_asset;
    CSAsset *_fallbackAsset;
    NSString *_locale;
    NSDictionary *_vtEventInfo;
    NSUInteger _invocationStyle;
}

@property(nonatomic) NSUInteger invocationStyle; // @synthesize invocationStyle=_invocationStyle;
@property(retain, nonatomic) NSDictionary *vtEventInfo; // @synthesize vtEventInfo=_vtEventInfo;
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) CSAsset *fallbackAsset; // @synthesize fallbackAsset=_fallbackAsset;
@property(retain, nonatomic) CSAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) NSUInteger activeChannel; // @synthesize activeChannel=_activeChannel;
@property(retain, nonatomic) NSString *uniqueUttTag; // @synthesize uniqueUttTag=_uniqueUttTag;
// - (void).cxx_destruct;
- (id)utteranceMetadataFilePathForSpIdType:(NSUInteger)arg1;
- (id)utteranceAudioFilepathForSpIdType:(NSUInteger)arg1;
- (id)description;
- (id)initWithSpIdInvocationStyle:(NSUInteger)arg1 asset:(id)arg2 fallbackAsset:(id)arg3 locale:(id)arg4 vtEventInfo:(id)arg5;

@end

