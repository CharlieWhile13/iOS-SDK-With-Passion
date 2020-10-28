//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface BKSHIDEventKeyCommand : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    NSString *_input;
    long long _keyCode;
    long long _modifierFlags;
    NSString *_unmodifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_commandModifiedInput;
}

+ (id)descriptorWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
+ (id)descriptorWithInput:(id)arg1 modifierFlags:(long long)arg2;
+ (BOOL)_shouldMatchKeyCommandsWithKeyCode:(long long)arg1 gsKeyboard:(struct __GSKeyboard )arg2;
+ (BOOL)_keyCodeIsModifierKey:(long long)arg1;
+ (id)keyCommandForEvent:(struct __IOHIDEvent )arg1 gsKeyboard:(struct __GSKeyboard )arg2;
+ (BOOL)supportsSecureCoding;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2;
@property(retain, nonatomic) NSString *commandModifiedInput; // @synthesize commandModifiedInput=_commandModifiedInput;
@property(retain, nonatomic) NSString *shiftModifiedInput; // @synthesize shiftModifiedInput=_shiftModifiedInput;
@property(retain, nonatomic) NSString *unmodifiedInput; // @synthesize unmodifiedInput=_unmodifiedInput;
@property(readonly, nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly, nonatomic) long long keyCode; // @synthesize keyCode=_keyCode;
@property(readonly, nonatomic) NSString *input; // @synthesize input=_input;
// - (void).cxx_destruct;
- (long long)describes:(id)arg1;
@property(readonly, nonatomic) BOOL isTextualKeyCommand;
- (id)_sanitizedInputForDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithInput:(id)arg1 keyCode:(long long)arg2 modifierFlags:(long long)arg3;
- (id)init;

@end

