//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFamilyProvider-Protocol.h>

@class NSArray;

@interface SXDocumentFontFamilyProvider : NSObject <SXFontFamilyProvider>
{
    NSArray *_fonts;
}

@property(readonly, nonatomic) NSArray *fonts; // @synthesize fonts=_fonts;
// - (void).cxx_destruct;
- (id)fontsFromDocument:(id)arg1;
- (id)fontFamilies;
- (id)initWithDocument:(id)arg1;

@end

