//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXMemoriesTitleHelper : NSObject
{
    NSString *_softLineBreak;
    NSString *_truncationToken;
    long long _preferredLineLength;
    double _minimumScaleFactor;
}

+ (id)defaultHelper;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) long long preferredLineLength; // @synthesize preferredLineLength=_preferredLineLength;
@property(copy, nonatomic) NSString *truncationToken; // @synthesize truncationToken=_truncationToken;
@property(copy, nonatomic) NSString *softLineBreak; // @synthesize softLineBreak=_softLineBreak;
// - (void).cxx_destruct;
- (BOOL)_isTextLongerThanPreferredLine:(id)arg1 range:(NSRange)arg2 minimumScaleFactor:(double)arg3;
- (id)titleForDisplayableText:(id)arg1 titleCategory:(long long)arg2 options:(NSUInteger)arg3;
- (id)displayableTextForTitle:(id)arg1 intent:(long long)arg2;
- (id)init;

@end

