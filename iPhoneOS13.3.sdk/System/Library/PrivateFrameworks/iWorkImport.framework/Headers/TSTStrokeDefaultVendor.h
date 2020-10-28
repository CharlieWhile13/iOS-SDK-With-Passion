//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol TSTCategoryProviding, TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding, TSTTableStrokeProviding;

__attribute__((visibility("hidden")))
@interface TSTStrokeDefaultVendor : NSObject
{
    BOOL _isValid;
    id <TSTTableStrokeProviding> _strokeProvider;
    id <TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding> _tableProvider;
    id <TSTCategoryProviding> _categoryProvider;
    NSPointerArray *_strokeTypeToLayerMap;
    NSRange _headerSideBorderColumnRange;
    NSRange _headerColumnSeparatorColumnRange;
    NSRange _bodySideBorderColumnRange;
    NSRange _topBorderRowRange;
    NSRange _headerRowSeparatorRowRange;
    NSRange _footerRowSeparatorRowRange;
    NSRange _bottomBorderRowRange;
}

@property(nonatomic) NSRange bottomBorderRowRange; // @synthesize bottomBorderRowRange=_bottomBorderRowRange;
@property(nonatomic) NSRange footerRowSeparatorRowRange; // @synthesize footerRowSeparatorRowRange=_footerRowSeparatorRowRange;
@property(nonatomic) NSRange headerRowSeparatorRowRange; // @synthesize headerRowSeparatorRowRange=_headerRowSeparatorRowRange;
@property(nonatomic) NSRange topBorderRowRange; // @synthesize topBorderRowRange=_topBorderRowRange;
@property(nonatomic) NSRange bodySideBorderColumnRange; // @synthesize bodySideBorderColumnRange=_bodySideBorderColumnRange;
@property(nonatomic) NSRange headerColumnSeparatorColumnRange; // @synthesize headerColumnSeparatorColumnRange=_headerColumnSeparatorColumnRange;
@property(nonatomic) NSRange headerSideBorderColumnRange; // @synthesize headerSideBorderColumnRange=_headerSideBorderColumnRange;
@property(retain, nonatomic) NSPointerArray *strokeTypeToLayerMap; // @synthesize strokeTypeToLayerMap=_strokeTypeToLayerMap;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property(nonatomic) __weak id <TSTCategoryProviding> categoryProvider; // @synthesize categoryProvider=_categoryProvider;
@property(nonatomic) __weak id <TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding> tableProvider; // @synthesize tableProvider=_tableProvider;
@property(nonatomic) __weak id <TSTTableStrokeProviding> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
// - (void).cxx_destruct;
- (void)p_updateStrokeLayer:(id)arg1 forRowStrokeType:(int)arg2;
- (void)p_updateStrokeLayer:(id)arg1 forColumnStrokeType:(int)arg2;
- (BOOL)p_headerRowSeparatorRowRangeIsValid;
- (int)p_strokeTypeForRow:(unsigned int)arg1;
- (BOOL)p_headerColumnSeparatorColumnRangeIsValid;
- (int)p_strokeTypeForColumn:(unsigned int)arg1;
- (int)validateChangeDescriptors:(id)arg1;
- (BOOL)validateGeometry;
- (void)invalidate;
- (id)strokeLayerForStrokeType:(int)arg1;
- (id)strokeLayerForRow:(unsigned int)arg1;
- (id)strokeLayerForColumn:(unsigned int)arg1;
- (id)initWithStrokeProvider:(id)arg1 tableProvider:(id)arg2 categoryProvider:(id)arg3;

@end

