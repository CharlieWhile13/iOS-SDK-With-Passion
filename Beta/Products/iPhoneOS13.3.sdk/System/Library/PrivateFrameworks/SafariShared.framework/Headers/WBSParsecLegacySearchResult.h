/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecLegacySearchResult : WBSParsecModel <WBSCompletionListItem, WBSParsecSearchResult> {
    WBSParsecActionButton * _actionButton;
    NSURL * _appPunchoutURL;
    NSString * _completion;
    WBSParsecImageRepresentation * _completionIcon;
    NSString * _descriptionText;
    NSString * _feedbackIdentifier;
    WBSParsecImageRepresentation * _icon;
    NSString * _identifier;
    unsigned long long  _legacyType;
    MKMapItem * _mapItem;
    NSString * _mediaKind;
    unsigned long long  _minimumRankOfTopHitToSuppressResult;
    long long  _parsecQueryID;
    NSString * _query;
    NSString * _referrerForLoadingResult;
    NSString * _sectionBundleIdentifier;
    NSString * _sectionHeader;
    SFSearchResult * _sfSearchResult;
    SFSearchResult * _sfSearchResultValue;
    NSString * _title;
    bool  _topHit;
    NSString * _urlString;
}

@property (nonatomic, readonly) WBSParsecActionButton *actionButton;
@property (nonatomic, readonly) NSURL *appPunchoutURL;
@property (nonatomic, readonly) NSString *completion;
@property (nonatomic, readonly) WBSParsecImageRepresentation *completionIcon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) NSString *feedbackIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSParsecImageRepresentation *icon;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) unsigned long long legacyType;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly, copy) NSString *mediaKind;
@property (nonatomic, readonly) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly, copy) NSString *referrerForLoadingResult;
@property (nonatomic, copy) NSString *sectionBundleIdentifier;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, retain) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *urlString;

+ (Class)_resultClassForDictionary:(id)arg1;
+ (id)_specializedSchema;
+ (id)resultWithDictionary:(id)arg1;
+ (id)schema;

- (void).cxx_destruct;
- (id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1;
- (id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2;
- (id)actionButton;
- (id)appPunchoutURL;
- (bool)canBecomeTopHitForQuery:(id)arg1;
- (id)completion;
- (id)completionIcon;
- (id)completionIconWithSession:(id)arg1;
- (id)description;
- (id)descriptionText;
- (unsigned long long)engagementDestination;
- (id)feedbackIdentifier;
- (id)icon;
- (id)iconWithSession:(id)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)legacyType;
- (id)mapItem;
- (id)mediaKind;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)query;
- (id)referrerForLoadingResult;
- (id)sectionBundleIdentifier;
- (id)sectionHeader;
- (void)setParsecQueryID:(long long)arg1;
- (void)setSectionBundleIdentifier:(id)arg1;
- (void)setSfSearchResultValue:(id)arg1;
- (id)sfSearchResultValue;
- (id)title;
- (id)urlString;

@end