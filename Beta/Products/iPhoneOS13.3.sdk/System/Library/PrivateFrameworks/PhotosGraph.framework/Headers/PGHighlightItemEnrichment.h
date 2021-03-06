/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGHighlightItemEnrichment : NSObject {
    NSDictionary * _contextualKeyAssetByHighlighItemUUID;
    <PGHighlightItemEnrichmentRule> * _rule;
}

@property (nonatomic, readonly) NSDictionary *contextualKeyAssetByHighlighItemUUID;
@property (nonatomic, readonly) <PGHighlightItemEnrichmentRule> *rule;

- (void).cxx_destruct;
- (id)contextualKeyAssetByHighlighItemUUID;
- (void)enrichHighlightItemLists:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithRule:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)rule;

@end
