//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionRemoveFromPlayHistory : VUIAction
{
    BOOL _isContinueWatching;
    NSString *_deleteID;
    NSString *_canonicalID;
}

@property(nonatomic) BOOL isContinueWatching; // @synthesize isContinueWatching=_isContinueWatching;
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(retain, nonatomic) NSString *deleteID; // @synthesize deleteID=_deleteID;
// - (void).cxx_destruct;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContextData:(id)arg1 isContinueWatching:(BOOL)arg2;

@end

