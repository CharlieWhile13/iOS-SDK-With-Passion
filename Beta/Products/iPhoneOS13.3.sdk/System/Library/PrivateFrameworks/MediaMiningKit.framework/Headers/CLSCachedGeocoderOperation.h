/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSCachedGeocoderOperation : PIOperationSubclass {
    double  _accuracy;
    bool  _forceQuery;
    id  _location;
    CLSLocationCache * _locationCache;
}

@property bool forceQuery;

+ (id)operationWithLocation:(id)arg1;
+ (id)operationWithLocation:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2;
+ (double)recommendedAccuracy;

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (bool)forceQuery;
- (id)initWithLocation:(id)arg1 withAccuracy:(double)arg2;
- (void)setForceQuery:(bool)arg1;

@end