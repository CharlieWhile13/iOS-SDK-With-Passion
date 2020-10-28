//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest, NSURLSession;

@interface FCURLRequest : NSObject
{
    NSURLRequest *_URLRequest;
    NSURLSession *_URLSession;
    long long _destination;
    long long _priority;
    NSString *_loggingKey;
    id /* CDUnknownBlockType */ _completion;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) NSString *loggingKey; // @synthesize loggingKey=_loggingKey;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(readonly, copy, nonatomic) NSURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
// - (void).cxx_destruct;
- (id)initWithURLRequest:(id)arg1 session:(id)arg2 destination:(long long)arg3 priority:(long long)arg4 loggingKey:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;

@end

