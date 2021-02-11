/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutVisualFormatTreeParser : NSObject {
    _UICollectionLayoutVisualTreeNode * _root;
    NSArray * _visualFormats;
}

@property (nonatomic, retain) _UICollectionLayoutVisualTreeNode *root;
@property (nonatomic, copy) NSArray *visualFormats;

+ (id)treeParserWithVisualFormats:(id)arg1;

- (void).cxx_destruct;
- (id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3;
- (id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1;
- (id)_parse;
- (void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)description;
- (void)enumerateTreeNodesDepthFirstUsingBlock:(id /* block */)arg1;
- (id)initWithVisualFormats:(id)arg1;
- (id)root;
- (void)setRoot:(id)arg1;
- (void)setVisualFormats:(id)arg1;
- (id)visualFormats;

@end