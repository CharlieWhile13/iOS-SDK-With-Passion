/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAggregateCommonRequest : WFTask {
    id /* block */  _completionHandler;
    NSLocale * _locale;
    WFLocation * _location;
    unsigned long long  _types;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, readonly) WFLocation *location;
@property (nonatomic, readonly) unsigned long long types;

- (void).cxx_destruct;
- (unsigned long long)_supportedForecastTypes:(unsigned long long)arg1;
- (void)cleanup;
- (id /* block */)completionHandler;
- (id)description;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)locale;
- (id)location;
- (void)setLocale:(id)arg1;
- (void)startWithService:(id)arg1;
- (unsigned long long)types;

@end