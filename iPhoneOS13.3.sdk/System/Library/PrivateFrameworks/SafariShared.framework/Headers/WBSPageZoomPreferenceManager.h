//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSPerSitePreferenceManager.h>

#import <SafariShared/WBSPerSitePreferenceManagerDefaultsDelegate-Protocol.h>
#import <SafariShared/WBSPerSitePreferenceManagerStorageDelegate-Protocol.h>

@class WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSPageZoomPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate>
{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_pageZoomPreference;
}

+ (id)pageZoomFactors;
@property(readonly, nonatomic) WBSPerSitePreference *pageZoomPreference; // @synthesize pageZoomPreference=_pageZoomPreference;
// - (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (long long)preferencesStoreKeyForPreference:(id)arg1;
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)valuesForPreference:(id)arg1;
- (id)preferences;
- (double)_pageZoomStepToZoomFactor:(long long)arg1;
- (BOOL)_canChangePageZoom:(BOOL)arg1 fromStep:(long long)arg2;
- (void)_incrementOrDecreaseZoomStep:(BOOL)arg1 forURL:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_getZoomStepForDomain:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_getDefaultZoomStep:(id /* CDUnknownBlockType */)arg1;
- (void)removeAllPageZoomPreferences;
- (void)removePageZoomPreferencesForHostnames:(id)arg1;
- (void)getAvailableActionsForURL:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)resetZoomLevelOnURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)zoomOutOnURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)zoomInOnURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getPageZoomFactorForURL:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithPerSitePreferencesStore:(id)arg1;

@end

