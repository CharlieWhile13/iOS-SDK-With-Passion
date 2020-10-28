//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, NSMutableCharacterSet, NSNumberFormatter, NSString;

@interface PKPaymentSetupFieldText : PKPaymentSetupField
{
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_amountFormatter;
    BOOL _secureText;
    BOOL _secureVisibleText;
    BOOL _numeric;
    BOOL _luhnCheck;
    BOOL _keepPaddingCharactersForSubmission;
    NSUInteger _minLength;
    NSUInteger _maxLength;
    NSString *_currencyCode;
    NSString *_displayFormatPlaceholder;
    NSMutableCharacterSet *_allowedCharacters;
    NSArray *_paddingCharacters;
}

@property(retain, nonatomic) NSArray *paddingCharacters; // @synthesize paddingCharacters=_paddingCharacters;
@property(retain, nonatomic) NSMutableCharacterSet *allowedCharacters; // @synthesize allowedCharacters=_allowedCharacters;
@property(copy, nonatomic) NSString *displayFormatPlaceholder; // @synthesize displayFormatPlaceholder=_displayFormatPlaceholder;
@property(nonatomic) BOOL keepPaddingCharactersForSubmission; // @synthesize keepPaddingCharactersForSubmission=_keepPaddingCharactersForSubmission;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic, getter=useLuhnCheck) BOOL luhnCheck; // @synthesize luhnCheck=_luhnCheck;
@property(nonatomic, getter=isNumeric) BOOL numeric; // @synthesize numeric=_numeric;
@property(nonatomic, getter=isSecureVisibleText) BOOL secureVisibleText; // @synthesize secureVisibleText=_secureVisibleText;
@property(nonatomic, getter=isSecureText) BOOL secureText; // @synthesize secureText=_secureText;
@property(nonatomic) NSUInteger maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) NSUInteger minLength; // @synthesize minLength=_minLength;
// - (void).cxx_destruct;
- (NSUInteger)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (void)updateDisplayFormat:(id)arg1;
- (id)displayFormatPaddingCharacters;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (BOOL)hasDisplayFormat;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)_submissionStringForValue:(id)arg1;
- (id)displayString;
- (void)setCurrentValue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(NSUInteger)arg2;

@end

