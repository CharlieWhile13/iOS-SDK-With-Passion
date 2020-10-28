//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDFormula, EDString, NSString, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDName : NSObject
{
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
    EDString *_nameString;
    EDFormula *_formula;
    NSUInteger _sheetIndex;
}

+ (id)name;
@property(nonatomic) NSUInteger sheetIndex; // @synthesize sheetIndex=_sheetIndex;
@property(readonly, nonatomic) EDFormula *formula; // @synthesize formula=_formula;
@property(retain, nonatomic) EDString *nameString; // @synthesize nameString=_nameString;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) OITSUPointerKeyDictionary *maxWorksheetReferences;
- (void)setFormula:(id)arg1 workbook:(id)arg2;
@property(readonly, nonatomic) NSString *internalFunctionName;
@property(readonly, nonatomic) BOOL isInternalFunction;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isEqualToEDName:(id)arg1;
- (id)init;
- (void)setFormulaString:(id)arg1 workbook:(id)arg2;
- (id)formulaString;

@end

