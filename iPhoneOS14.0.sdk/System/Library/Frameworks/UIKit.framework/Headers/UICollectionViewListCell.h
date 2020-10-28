#if (defined(USE_UIKIT_PUBLIC_HEADERS) && USE_UIKIT_PUBLIC_HEADERS) || !__has_include(<UIKitCore/UICollectionViewListCell.h>)
//
//  UICollectionViewListCell.h
//  UIKit
//
//  Copyright © 2020 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/UICollectionViewCell.h>

@class UIListContentConfiguration, UICellAccessory, UILayoutGuide, UISwipeActionsConfiguration;

NS_ASSUME_NONNULL_BEGIN

UIKIT_EXTERN API_AVAILABLE(ios(14_0), tvos(14.0), watchos(7.0))
@interface UICollectionViewListCell : UICollectionViewCell

/// Returns a default list content configuration for the cell's style.
- (UIListContentConfiguration *)defaultContentConfiguration;


// indentation:

/// Defines the level of indentation for this cell. This is set automatically when using a hierarchical data source.
@property (nonatomic) NSInteger indentationLevel;

/// The width of an indentation level. The overall indentation will be indentationWidth * indentationLevel.
@property (nonatomic) CGFloat indentationWidth;

/// Defines whether accessories on the leading side are indented as well. If NO, only the content view will be indented.
/// Defaults to YES.
@property (nonatomic) BOOL indentsAccessories;


// accessories:

/// All the accessories that should be decorating the cell. The order and whether an accessory is
/// rendered on the leading or trailing side of the cell is defined by the system.
@property (nonatomic, copy) NSArray<UICellAccessory *> *accessories;


// separators:

/// When used in a section that supports separators, this guide can be used to adjust the preferred
/// insets of the separators. To align the separators to your content, add constraints to the leading
/// or trailing anchors of this layout guide. When a system-provided content configuration is applied
/// to the cell, the separator will be automatically aligned to the primary text in the content view.
/// @see UICollectionLayoutListConfiguration
@property (nonatomic, readonly) UILayoutGuide *separatorLayoutGuide API_UNAVAILABLE(tvos);


// swipe actions:

/// When used in a section that supports swipe actions, configures swipe actions displayed on the leading edge of the cell.
/// You can override the getter for this property if you wish to return the configuration lazily when a swipe begins.
@property (nonatomic, strong, nullable) UISwipeActionsConfiguration *leadingSwipeActionsConfiguration API_UNAVAILABLE(tvos);

/// When used in a section that supports swipe actions, configures swipe actions displayed on the trailing edge of the cell.
/// You can override the getter for this property if you wish to return the configuration lazily when a swipe begins.
@property (nonatomic, strong, nullable) UISwipeActionsConfiguration *trailingSwipeActionsConfiguration API_UNAVAILABLE(tvos);

@end

NS_ASSUME_NONNULL_END

#else
#import <UIKitCore/UICollectionViewListCell.h>
#endif
