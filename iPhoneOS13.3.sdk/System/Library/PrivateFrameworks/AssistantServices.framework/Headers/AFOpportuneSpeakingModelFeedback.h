//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding>
{
    NSDate *_lastNegativeFeedback;
    NSDictionary *_negativeFeedbackByContact;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *negativeFeedbackByContact; // @synthesize negativeFeedbackByContact=_negativeFeedbackByContact;
@property(retain, nonatomic) NSDate *lastNegativeFeedback; // @synthesize lastNegativeFeedback=_lastNegativeFeedback;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

