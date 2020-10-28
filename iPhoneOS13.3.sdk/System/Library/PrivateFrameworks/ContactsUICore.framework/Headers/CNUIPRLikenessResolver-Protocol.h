//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNContact, CNObservable, CNUIPRLikenessResolverOptions, NSArray, PRMonogramColor;
@protocol CNCancelable, CNKeyDescriptor, CNScheduler, CNUIPlaceholderProviderFactory;

@protocol CNUIPRLikenessResolver <NSObject>
+ (id <CNKeyDescriptor>)descriptorForRequiredKeys;
- (id <CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
- (CNObservable *)basicMonogramObservableFromString:(CNObservable *)arg1 color:(PRMonogramColor *)arg2;
- (CNObservable *)likenessesForContact:(CNContact *)arg1 options:(CNUIPRLikenessResolverOptions *)arg2 workScheduler:(id <CNScheduler>)arg3;
- (CNObservable *)likenessesForContact:(CNContact *)arg1 workScheduler:(id <CNScheduler>)arg2;
- (id <CNCancelable>)resolveLikenessesForContacts:(NSArray *)arg1 workScheduler:(id <CNScheduler>)arg2 withContentHandler:(void (^)(NSArray *))arg3;
@end

