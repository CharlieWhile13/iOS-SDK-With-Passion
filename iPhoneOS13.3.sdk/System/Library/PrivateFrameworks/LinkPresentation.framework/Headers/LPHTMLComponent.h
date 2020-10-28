//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMElement, LPLinkHTMLGenerator, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLComponent : NSObject
{
    NSMutableArray *_children;
    LPLinkHTMLGenerator *_generator;
    DOMElement *_element;
    NSString *_themePath;
}

+ (id)additionalGlobalOutOfLineStyleDeclarations;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)arg1;
@property(readonly, nonatomic) NSString *themePath; // @synthesize themePath=_themePath;
@property(readonly, nonatomic) DOMElement *element; // @synthesize element=_element;
@property(readonly, nonatomic) __weak LPLinkHTMLGenerator *generator; // @synthesize generator=_generator;
// - (void).cxx_destruct;
- (id)childThemePathWithName:(id)arg1;
- (void)addChild:(id)arg1;
- (id)initWithTagName:(id)arg1 themePath:(id)arg2 generator:(id)arg3;

@end

