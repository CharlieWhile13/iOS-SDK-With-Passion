/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchFieldPlaceholderResult : PBCodable <NSCopying> {
    NSString * _displayString;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, readonly) bool hasDisplayString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayString;
- (bool)hasDisplayString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
