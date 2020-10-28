//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUState, NSArray, NSMutableArray, NSPointerArray;

@interface CUStateMachine : NSObject
{
    CUState *_currentState;
    NSMutableArray *_eventQueue;
    BOOL _dispatching;
    NSPointerArray *_lcaPath;
    BOOL _started;
    CUState *_targetState;
    CUState *_initialState;
    NSArray *_states;
}

@property(retain, nonatomic) NSArray *states; // @synthesize states=_states;
@property(retain, nonatomic) CUState *initialState; // @synthesize initialState=_initialState;
// - (void).cxx_destruct;
- (void)_firstTimeInit;
- (void)transitionToState:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (void)invalidate;
- (void)start;
- (void)dealloc;

@end

