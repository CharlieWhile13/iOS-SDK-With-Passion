//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OAVReadState.h>

@class EXReadState;

__attribute__((visibility("hidden")))
@interface EXOAVState : OAVReadState
{
    EXReadState *mEXReadState;
}

@property(readonly) __weak EXReadState *exState; // @synthesize exState=mEXReadState;
// - (void).cxx_destruct;
- (id)initWithEXReadState:(id)arg1 packagePart:(id)arg2;

@end

