//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSBagURLParser : NSObject
{
}

+ (NSRange)_rangeOfTemplateInURLString:(id)arg1;
+ (NSRange)_rangeofSubstringWithOpeningTag:(id)arg1 closingTag:(id)arg2 inString:(id)arg3;
+ (id)_firstVariableInTemplate:(id)arg1 includeTags:(BOOL)arg2;
+ (id)URLBySubstitutingVariablesInURLString:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;

@end
