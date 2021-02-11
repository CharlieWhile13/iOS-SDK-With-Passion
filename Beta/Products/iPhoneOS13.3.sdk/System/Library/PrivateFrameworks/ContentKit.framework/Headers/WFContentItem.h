/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFContentItem : NSObject <NSSecureCoding, UIActivityItemSource, WFContentItemClass, WFCopying> {
    WFType * _internalRepresentationType;
    NSMutableDictionary * _representationsByType;
    NSMutableDictionary * _subItemsByClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSExtensionItem *extensionItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFImage *icon;
@property (nonatomic, readonly) WFRepresentation *internalRepresentation;
@property (nonatomic, readonly) WFType *internalRepresentationType;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) NSExtensionItem *minimalExtensionItem;
@property (nonatomic, readonly) NSItemProvider *minimalItemProvider;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSMutableDictionary *representationsByType;
@property (nonatomic, readonly) NSString *richListTitle;
@property (nonatomic, retain) NSMutableDictionary *subItemsByClass;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)allProperties;
+ (id)allSupportedItemClasses;
+ (id)allSupportedTypes;
+ (id)badCoercionErrorDefaultResponsibleComponent;
+ (id)badCoercionErrorForItemClass:(Class)arg1;
+ (id)badCoercionErrorForItemClasses:(id)arg1;
+ (id)badCoercionErrorForObjectClass:(Class)arg1;
+ (id)badCoercionErrorForType:(id)arg1;
+ (id)badCoercionErrorForTypeDescription:(id)arg1 toTypeDescription:(id)arg2;
+ (id)badCoercionErrorWithReasonString:(id)arg1;
+ (bool)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (bool)contentItems:(id)arg1 haveContentProperties:(id)arg2;
+ (id /* block */)contentPropertySubstitutor;
+ (id)countDescription;
+ (bool)errorIsBadCoercionError:(id)arg1;
+ (id)filterDescription;
+ (id)filterRepresentationsForAllowedContent:(id)arg1;
+ (void)getContentItemFromSerializedItem:(id)arg1 sourceName:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)hasFileOutput;
+ (bool)hasLibrary;
+ (bool)hasStringOutput;
+ (bool)isAvailableOnPlatform:(long long)arg1;
+ (bool)isContentItemSubclass;
+ (id)itemFromSerializedItem:(id)arg1 withItemClass:(Class)arg2 forType:(id)arg3 nameIfKnown:(id)arg4 sourceName:(id)arg5 completionHandler:(id /* block */)arg6;
+ (id)itemWithFile:(id)arg1;
+ (id)itemWithObject:(id)arg1;
+ (id)itemWithObject:(id)arg1 named:(id)arg2;
+ (id)itemWithRepresentation:(id)arg1;
+ (id)itemWithRepresentation:(id)arg1 forType:(id)arg2;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (id)localizedFilterDescription;
+ (id)localizedPluralFilterDescription;
+ (id)localizedPluralTypeDescription;
+ (id)localizedTypeDescription;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)pasteboardValueClasses;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)populateBadCoercionError:(id)arg1 withResponsibleComponent:(id)arg2;
+ (id)properties;
+ (id)propertyBuilders;
+ (id)propertyForName:(id)arg1;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportedItemClassMustBeDeterminedByInstance:(Class)arg1;
+ (id)supportedItemClasses;
+ (id)supportedItemClassesExcludingInstanceSpecificTypes;
+ (id)supportedPropertyForProperty:(id)arg1;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)supportedTypes;
+ (id)supportedTypesExcludingInstanceSpecificTypes;
+ (bool)supportedTypesMustBeDeterminedByInstance;
+ (bool)supportsSecureCoding;
+ (id)typeDescription;

- (void).cxx_destruct;
- (id)_getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)additionalRepresentationsForSerialization;
- (id)allSupportedItemClasses;
- (id)allSupportedTypes;
- (bool)cachesSupportedTypes;
- (bool)canEncodeWithCoder:(id)arg1;
- (bool)canGenerateIntermediaryRepresentationForItemClass:(Class)arg1;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (bool)canPerformCoercion:(id)arg1;
- (void)coerceToItemClass:(Class)arg1 completionHandler:(id /* block */)arg2;
- (void)coerceToItemClasses:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)coercionOptions:(id)arg1 allowCoercionsToItemClass:(Class)arg2;
- (bool)coercionOptions:(id)arg1 allowCoercionsToType:(id)arg2;
- (id)copyWithName:(id)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionItem;
- (id)extensionItemWithItemProvider:(id)arg1;
- (id)fileRepresentationForType:(id)arg1;
- (id)fileRepresentationsForType:(id)arg1;
- (void)forceCoerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateFileRepresentations:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)generateRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)generateSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateSubItemsForItemClasses:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getFileRepresentation:(id /* block */)arg1 forType:(id)arg2;
- (void)getFileRepresentations:(id /* block */)arg1 forType:(id)arg2;
- (void)getFileRepresentationsForSerialization:(id /* block */)arg1;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)getObjectRepresentation:(id /* block */)arg1 forClass:(Class)arg2;
- (void)getObjectRepresentations:(id /* block */)arg1 forClass:(Class)arg2;
- (void)getPreferredFileExtension:(id /* block */)arg1;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (id)getRepresentationsForType:(id)arg1 error:(id*)arg2;
- (void)getRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)getSerializedItem:(id /* block */)arg1;
- (void)getTitle:(id /* block */)arg1;
- (bool)hasStringOutput;
- (id)icon;
- (bool)includesFileRepresentationInSerializedItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentation:(id)arg1 forType:(id)arg2;
- (id)intermediaryTypesForCoercionToItemClass:(Class)arg1;
- (id)internalName;
- (id)internalRepresentation;
- (id)internalRepresentationForCopying;
- (id)internalRepresentationType;
- (bool)isCoercibleToItemClass:(Class)arg1;
- (bool)isCoercibleToItemClasses:(id)arg1;
- (id)itemProvider;
- (id)itemProviderForTypes:(id)arg1;
- (id)itemsByCoercingToItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)metadataForSerialization;
- (id)minimalExtensionItem;
- (id)minimalItemProvider;
- (id)name;
- (id)nativePasteboardTypeForObjectRepresentationOfClass:(Class)arg1;
- (id)objectForClass:(Class)arg1;
- (id)objectRepresentationForClass:(Class)arg1;
- (id)objectRepresentationsForClass:(Class)arg1;
- (id)objectsForClass:(Class)arg1;
- (id)outputTypes;
- (id)ownedTypes;
- (void)performCoercion:(id)arg1;
- (id)preferredFileType;
- (id)preferredObjectType;
- (id)preferredTypeOfClass:(Class)arg1;
- (id)representationForType:(id)arg1;
- (id)representationsByType;
- (id)representationsForType:(id)arg1;
- (id)richListTitle;
- (void)setFileRepresentations:(id)arg1 forType:(id)arg2;
- (void)setObjectRepresentations:(id)arg1 forClass:(Class)arg2;
- (void)setRepresentations:(id)arg1 forType:(id)arg2;
- (void)setRepresentationsByType:(id)arg1;
- (void)setSubItems:(id)arg1 forClass:(Class)arg2;
- (void)setSubItemsByClass:(id)arg1;
- (id)subItemForClass:(Class)arg1;
- (id)subItemsByClass;
- (id)subItemsForClass:(Class)arg1;
- (id)supportedItemClasses;
- (id)supportedTypes;
- (id)typeForCoercionRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)prepareForActivityItemPresentationWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldUseObjectRepresentation;

@end