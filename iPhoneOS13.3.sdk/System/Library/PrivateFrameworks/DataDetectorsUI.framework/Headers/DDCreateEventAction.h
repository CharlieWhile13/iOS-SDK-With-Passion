//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

#import <DataDetectorsUI/EKEventEditViewDelegate-Protocol.h>

@class DDRemoteActionViewController;

__attribute__((visibility("hidden")))
@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate>
{
    DDRemoteActionViewController *viewController;
}

+ (BOOL)actionAvailableForEvent:(id)arg1;
+ (id)cachedEventForICSString:(id)arg1;
@property(retain, nonatomic) DDRemoteActionViewController *viewController; // @synthesize viewController;
// - (void).cxx_destruct;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (void)prepareViewControllerForActionController:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (int)interactionType;
- (id)icon;
- (id)localizedName;
- (void)invalidate;

@end

