//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSStateDumpService : SBSAbstractSystemService
{
}

- (void)disableRemoteStateDumpWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestStateDump:(NSUInteger)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;

@end

