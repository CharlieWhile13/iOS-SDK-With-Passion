//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CoreDAVAction : NSObject
{
    int _action;
    id _context;
    id _changeContext;
    BOOL _ignoresGuardianRestrictions;
}

@property(nonatomic) BOOL ignoresGuardianRestrictions; // @synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions;
@property(retain, nonatomic) id changeContext; // @synthesize changeContext=_changeContext;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) int action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2;

@end
