//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupProduct.h>

@interface PKPaymentSetupProduct (PKUIUtilities)
- (void)resetCache;
- (id)logoCachedImage:(id /* CDUnknownBlockType */)arg1;
- (id)thumbnailCachedImageForSize:(CGSize)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)plasticCardCachedImage:(id /* CDUnknownBlockType */)arg1;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)digitalCardCachedImage:(id /* CDUnknownBlockType */)arg1;
- (void)_commonCachedImageFromURL:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@end

