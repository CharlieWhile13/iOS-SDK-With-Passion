//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRouteContextObserver-Protocol.h>

__attribute__((visibility("hidden")))
@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver>
{
    struct LabelTransitSupport _transitSupport;
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _routeContext;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)routeContextStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithRouteContext:(id)arg1 transitSupport:(struct LabelTransitSupport )arg2;

@end

