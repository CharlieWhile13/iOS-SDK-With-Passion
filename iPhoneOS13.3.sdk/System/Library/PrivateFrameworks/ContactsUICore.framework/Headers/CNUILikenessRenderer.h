//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUILikenessRenderer : NSObject
{
}

+ (id)concurrentCachingRendererWithLikenessResolver:(id)arg1 capacity:(NSUInteger)arg2 schedulerProvider:(id)arg3;
+ (id)cachingRendererWithLikenessResolver:(id)arg1 capacity:(NSUInteger)arg2 schedulerProvider:(id)arg3;
+ (id)cachingRendererWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;
+ (id)rendererWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;
+ (id)descriptorForRequiredKeysForCaching;
+ (id)descriptorForRequiredKeys;

@end

