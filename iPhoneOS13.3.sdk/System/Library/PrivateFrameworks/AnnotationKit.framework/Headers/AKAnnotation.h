//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString;

@interface AKAnnotation : NSObject <NSSecureCoding, NSCopying>
{
    id /* CDUnknownBlockType */ _appearanceOverride;
    BOOL _shouldUseAppearanceOverride;
    BOOL _isObservingForAppearance;
    CGPDFDocument _appearanceOverridePDF;
    BOOL _isObservingForIsEdited;
    BOOL _isReallyObservingForIsEdited;
    long long _predConformsToAKStrokedAnnotationProtocol;
    BOOL _conformsToAKStrokedAnnotationProtocol;
    long long _predConformsToAKFilledAnnotationProtocol;
    BOOL _conformsToAKFilledAnnotationProtocol;
    long long _predConformsToAKRectangularAnnotationProtocol;
    BOOL _conformsToAKRectangularAnnotationProtocol;
    long long _predConformsToAKFlippableAnnotationProtocol;
    BOOL _conformsToAKFlippableAnnotationProtocol;
    long long _predConformsToAKRotatableAnnotationProtocol;
    BOOL _conformsToAKRotatableAnnotationProtocol;
    long long _predConformsToAKTextAnnotationProtocol;
    BOOL _conformsToAKTextAnnotationProtocol;
    long long _predConformsToAKParentAnnotationProtocol;
    BOOL _conformsToAKParentAnnotationProtocol;
    long long _predConformsToAKChildAnnotationProtocol;
    BOOL _conformsToAKChildAnnotationProtocol;
    BOOL _editsDisableAppearanceOverride;
    BOOL _isEdited;
    BOOL _isTranslating;
    BOOL _isDraggingHandle;
    BOOL _isEditingText;
    BOOL _textIsFixedWidth;
    BOOL _textIsFixedHeight;
    BOOL _textIsClipped;
    BOOL _shouldUsePlaceholderText;
    BOOL _isBeingCopied;
    NSString *_UUID;
    NSString *_customPlaceholderText;
    double _originalModelBaseScaleFactor;
    long long _originalExifOrientation;
    NSDate *_modificationDate;
    NSString *_author;
    long long _akSerializationVersion;
    long long _akSerializationPlatform;
    AKAnnotation *_parentAnnotation;
    AKAnnotation *_childAnnotation;
    CGRect _initialDrawingBoundsForAppearanceOverride;
}

+ (BOOL)supportsSecureCoding;
+ (id)annotationWithData:(id)arg1;
+ (id)defaultPlaceholderText;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property BOOL isBeingCopied; // @synthesize isBeingCopied=_isBeingCopied;
@property CGRect initialDrawingBoundsForAppearanceOverride; // @synthesize initialDrawingBoundsForAppearanceOverride=_initialDrawingBoundsForAppearanceOverride;
@property __weak AKAnnotation *childAnnotation; // @synthesize childAnnotation=_childAnnotation;
@property __weak AKAnnotation *parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
@property BOOL shouldUsePlaceholderText; // @synthesize shouldUsePlaceholderText=_shouldUsePlaceholderText;
@property BOOL textIsClipped; // @synthesize textIsClipped=_textIsClipped;
@property BOOL textIsFixedHeight; // @synthesize textIsFixedHeight=_textIsFixedHeight;
@property BOOL textIsFixedWidth; // @synthesize textIsFixedWidth=_textIsFixedWidth;
@property BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
@property long long akSerializationPlatform; // @synthesize akSerializationPlatform=_akSerializationPlatform;
@property long long akSerializationVersion; // @synthesize akSerializationVersion=_akSerializationVersion;
@property BOOL isDraggingHandle; // @synthesize isDraggingHandle=_isDraggingHandle;
@property BOOL isTranslating; // @synthesize isTranslating=_isTranslating;
@property(copy) NSString *author; // @synthesize author=_author;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property BOOL isEdited; // @synthesize isEdited=_isEdited;
@property BOOL editsDisableAppearanceOverride; // @synthesize editsDisableAppearanceOverride=_editsDisableAppearanceOverride;
@property(nonatomic) long long originalExifOrientation; // @synthesize originalExifOrientation=_originalExifOrientation;
@property(nonatomic) double originalModelBaseScaleFactor; // @synthesize originalModelBaseScaleFactor=_originalModelBaseScaleFactor;
@property(copy) NSString *customPlaceholderText; // @synthesize customPlaceholderText=_customPlaceholderText;
@property(readonly) NSString *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (BOOL)conformsToAKChildAnnotationProtocol;
- (BOOL)conformsToAKParentAnnotationProtocol;
- (BOOL)conformsToAKTextAnnotationProtocol;
- (BOOL)conformsToAKRotatableAnnotationProtocol;
- (BOOL)conformsToAKFlippableAnnotationProtocol;
- (BOOL)conformsToAKRectangularAnnotationProtocol;
- (BOOL)conformsToAKFilledAnnotationProtocol;
- (BOOL)conformsToAKStrokedAnnotationProtocol;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
@property BOOL shouldUseAppearanceOverride;
@property(readonly) BOOL isUsingAppearanceOverride;
@property(copy) id /* CDUnknownBlockType */ appearanceOverride;
@property BOOL shouldObserveEdits;
- (void)translateBy:(CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2;
@property(readonly) CGRect integralDrawingBounds;
@property(readonly) CGRect drawingBounds;
@property(readonly) CGRect hitTestBounds;
- (void)adjustModelToCompensateForOriginalExif;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
@property(readonly) BOOL shouldBurnIn;
@property(readonly) NSString *displayName;
- (id)dataRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

