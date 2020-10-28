//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIStorePageDataConsumer : SSVURLDataConsumer
{
    Class _storePageClass;
}

@property(nonatomic) Class storePageClass; // @synthesize storePageClass=_storePageClass;
- (id)_roomComponentsForDictionary:(id)arg1 items:(id)arg2 gridType:(long long)arg3;
- (id)_newPageComponentContextWithDictionary:(id)arg1;
- (id)_newFeaturedContentComponentForKind:(long long)arg1 context:(id)arg2;
- (id)_newCustomPageComponentForBlockType:(id)arg1 context:(id)arg2;
- (id)_multiRoomComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_groupingPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_customPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_bannerRoomComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)_backgroundArtworkWithDictionary:(id)arg1;
- (id)_artistPageComponentsForDictionary:(id)arg1 items:(id)arg2;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id )arg3;
- (id)storePageWithDictionary:(id)arg1 response:(id)arg2;
- (id)storePageWithDictionary:(id)arg1;
- (id)init;

@end

