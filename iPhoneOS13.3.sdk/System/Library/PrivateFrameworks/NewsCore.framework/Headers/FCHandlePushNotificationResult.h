//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying>
{
    BOOL _handled;
    NSSet *_recordZoneIDs;
}

@property(retain, nonatomic) NSSet *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(nonatomic, getter=wasHandled) BOOL handled; // @synthesize handled=_handled;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

