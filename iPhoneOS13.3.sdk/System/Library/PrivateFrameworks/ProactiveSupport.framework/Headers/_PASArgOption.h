//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PASArgOption : NSObject
{
    int _longOptionFlag;
    BOOL _required;
    NSString *_name;
    NSString *_shortName;
    NSString *_helpDescription;
    NSString *_argMetavar;
}

+ (id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(BOOL)arg5;
+ (id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4;
+ (id)optionWithName:(id)arg1 shortName:(id)arg2 help:(id)arg3;
@property(readonly, nonatomic) BOOL required; // @synthesize required=_required;
@property(readonly, copy, nonatomic) NSString *argMetavar; // @synthesize argMetavar=_argMetavar;
@property(readonly, copy, nonatomic) NSString *helpDescription; // @synthesize helpDescription=_helpDescription;
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(BOOL)arg5;

@end

