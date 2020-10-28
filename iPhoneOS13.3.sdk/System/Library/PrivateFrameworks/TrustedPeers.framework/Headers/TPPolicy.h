//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrustedPeers/TPPolicy-Protocol.h>

@class NSArray, NSDictionary;

@interface TPPolicy : NSObject <TPPolicy, NSSecureCoding>
{
    BOOL _unknownRedactions;
    NSArray *_modelToCategory;
    NSDictionary *_categoriesByView;
    NSDictionary *_introducersByCategory;
    NSArray *_keyViewMapping;
    NSUInteger _version;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithModelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 keyViewMapping:(id)arg4 unknownRedactions:(BOOL)arg5 version:(NSUInteger)arg6;
@property BOOL unknownRedactions; // @synthesize unknownRedactions=_unknownRedactions;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *keyViewMapping; // @synthesize keyViewMapping=_keyViewMapping;
@property(retain, nonatomic) NSDictionary *introducersByCategory; // @synthesize introducersByCategory=_introducersByCategory;
@property(retain, nonatomic) NSDictionary *categoriesByView; // @synthesize categoriesByView=_categoriesByView;
@property(retain, nonatomic) NSArray *modelToCategory; // @synthesize modelToCategory=_modelToCategory;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mapKeyToView:(id)arg1;
- (id)viewsForModel:(id)arg1;
- (id)excludedViewsForModel:(id)arg1;
- (BOOL)peerInCategory:(id)arg1 canAccessView:(id)arg2;
- (BOOL)trustedPeerInCategory:(id)arg1 canIntroduceCategory:(id)arg2;
- (id)categoryForModel:(id)arg1;

@end

