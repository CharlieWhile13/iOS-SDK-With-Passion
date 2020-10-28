//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideosUI/VUIJSAccountChannelsInterface-Protocol.h>

@class VSAccountStore;

__attribute__((visibility("hidden")))
@interface VUIJSAccountChannels : IKJSObject <VUIJSAccountChannelsInterface>
{
    VSAccountStore *_accountStore;
}

@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
// - (void).cxx_destruct;
- (void)fetchMSOProviderStatus:(id)arg1;
- (void)_sendVideoSubscriberChangedNotificationToTheJavaScript;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end

