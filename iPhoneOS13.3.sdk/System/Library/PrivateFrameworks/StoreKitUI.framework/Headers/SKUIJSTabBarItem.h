//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSTabBarItem-Protocol.h>

@class IKJSNavigationDocument, JSManagedValue, NSString, SKUITabBarItem;

__attribute__((visibility("hidden")))
@interface SKUIJSTabBarItem : IKJSObject <SKUIJSTabBarItem>
{
    JSManagedValue *_managedNavigationDocument;
    IKJSNavigationDocument *_navigationDocument;
    IKJSObject *_owner;
    SKUITabBarItem *_tabBarItem;
}

@property(readonly, nonatomic) SKUITabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *badgeValue;
@property(readonly, nonatomic) NSString *rootURL;
@property(readonly, nonatomic) IKJSNavigationDocument *navigationDocument;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4;

@end

