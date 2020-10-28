//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNTUCallProvider-Protocol.h>

@class NSSet, NSString, TUCallProvider;

@interface CNTUCallProvider : NSObject <CNTUCallProvider>
{
    TUCallProvider *_callProvider;
}

@property(copy, nonatomic) TUCallProvider *callProvider; // @synthesize callProvider=_callProvider;
// - (void).cxx_destruct;
- (id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property(readonly, nonatomic) BOOL supportsVideo;
@property(readonly, nonatomic) BOOL supportsAudio;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)initWithCallProvider:(id)arg1;

@end

