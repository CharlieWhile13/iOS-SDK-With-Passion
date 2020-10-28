//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptPreviewOverlay : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(copy) id width;
@property(copy) NSString *userInfo;
@property(copy) id top;
@property(copy) id right;
@property(copy) id height;
@property(readonly, getter=isVisible) id visible;
- (id)_className;
- (void)show:(id)arg1;
- (void)loadURLRequest:(id)arg1;
- (void)hide:(id)arg1;

@end

