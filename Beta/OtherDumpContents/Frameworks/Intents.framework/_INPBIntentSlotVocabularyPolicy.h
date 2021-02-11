/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotVocabularyPolicy : PBCodable <NSCopying, NSSecureCoding, _INPBIntentSlotVocabularyPolicy> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
    NSArray * _intentSlotNames;
    NSArray * _intentSlotVocabularyConcepts;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *intentSlotNames;
@property (nonatomic, readonly) unsigned long long intentSlotNamesCount;
@property (nonatomic, copy) NSArray *intentSlotVocabularyConcepts;
@property (nonatomic, readonly) unsigned long long intentSlotVocabularyConceptsCount;
@property (readonly) Class superclass;

+ (Class)intentSlotVocabularyConceptsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addIntentSlotNames:(id)arg1;
- (void)addIntentSlotVocabularyConcepts:(id)arg1;
- (void)clearIntentSlotNames;
- (void)clearIntentSlotVocabularyConcepts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentSlotNames;
- (id)intentSlotNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotNamesCount;
- (id)intentSlotVocabularyConcepts;
- (id)intentSlotVocabularyConceptsAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentSlotVocabularyConceptsCount;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentSlotNames:(id)arg1;
- (void)setIntentSlotVocabularyConcepts:(id)arg1;
- (void)writeTo:(id)arg1;

@end