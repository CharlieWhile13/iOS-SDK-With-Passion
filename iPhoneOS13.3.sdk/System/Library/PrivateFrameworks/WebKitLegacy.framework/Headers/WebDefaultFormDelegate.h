//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebFormDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface WebDefaultFormDelegate : NSObject <WebFormDelegate>
{
}

+ (id)sharedFormDelegate;
- (void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
- (BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
- (void)didFocusTextField:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;

@end

