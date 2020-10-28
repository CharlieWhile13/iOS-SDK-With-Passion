//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMMachineReadableCodeLoggingController : NSObject
{
    BOOL __seenMachineReadableObjectOfAcceptableSize;
    BOOL __seenMachineReadableObjectOfUnacceptableSize;
    BOOL __seenMachineReadableObjectInNonActiveState;
}

@property(nonatomic, setter=_setSeenMachineReadableObjectInNonActiveState:) BOOL _seenMachineReadableObjectInNonActiveState; // @synthesize _seenMachineReadableObjectInNonActiveState=__seenMachineReadableObjectInNonActiveState;
@property(nonatomic, setter=_setSeenMachineReadableObjectOfUnacceptableSize:) BOOL _seenMachineReadableObjectOfUnacceptableSize; // @synthesize _seenMachineReadableObjectOfUnacceptableSize=__seenMachineReadableObjectOfUnacceptableSize;
@property(nonatomic, setter=_setSeenMachineReadableObjectOfAcceptableSize:) BOOL _seenMachineReadableObjectOfAcceptableSize; // @synthesize _seenMachineReadableObjectOfAcceptableSize=__seenMachineReadableObjectOfAcceptableSize;
- (void)resetLoggingState;
- (void)logMachineReadableCodeResult:(id)arg1 isOfSignificantSize:(BOOL)arg2;
- (void)logMachineReadableCodeResultDuringInactiveAppState;
- (id)init;

@end

