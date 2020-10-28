//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSSet, SSLookupRequest, VSAuditToken, VSOptional;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation
{
    BOOL _needsProductProfile;
    BOOL _shouldPersonalizeResponse;
    BOOL _shouldPrecomposeIcon;
    NSSet *_appAdamIDs;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    SSLookupRequest *_lookupRequest;
    NSOperationQueue *_imageLoadingQueue;
    CGSize _preferredArtworkSize;
}

@property(retain, nonatomic) NSOperationQueue *imageLoadingQueue; // @synthesize imageLoadingQueue=_imageLoadingQueue;
@property(retain, nonatomic) SSLookupRequest *lookupRequest; // @synthesize lookupRequest=_lookupRequest;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(retain, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) BOOL shouldPrecomposeIcon; // @synthesize shouldPrecomposeIcon=_shouldPrecomposeIcon;
@property(nonatomic) BOOL shouldPersonalizeResponse; // @synthesize shouldPersonalizeResponse=_shouldPersonalizeResponse;
@property(nonatomic) BOOL needsProductProfile; // @synthesize needsProductProfile=_needsProductProfile;
@property(nonatomic) CGSize preferredArtworkSize; // @synthesize preferredArtworkSize=_preferredArtworkSize;
@property(copy, nonatomic) NSSet *appAdamIDs; // @synthesize appAdamIDs=_appAdamIDs;
// - (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)_appDescriptionFromLookupResponse:(id)arg1 appAdamID:(id)arg2;
- (void)_handleLookupResponse:(id)arg1;
- (id)initWithAppAdamIDs:(id)arg1;
- (id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(CGSize)arg2;
- (id)init;

@end

