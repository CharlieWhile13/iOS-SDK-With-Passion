//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityPropertyDescriptor : NSObject <NSCopying>
{
    BOOL _allowsDefaultValue;
    BOOL _retrievesSourcePropertiesAtFetch;
    BOOL _sourceSupportsFiltering;
    NSString *_name;
    NSString *_sortAsName;
    NSUInteger _propertyType;
    NSString *_propertyValueClassName;
    id _defaultValue;
    NSSet *_sourcePropertyNames;
    id /* CDUnknownBlockType */ _sourceFilterValueBlock;
    id /* CDUnknownBlockType */ _sourceFilterBlock;
}

+ (id)_classNameFromPropertyType:(NSUInteger)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sourceFilterBlock; // @synthesize sourceFilterBlock=_sourceFilterBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sourceFilterValueBlock; // @synthesize sourceFilterValueBlock=_sourceFilterValueBlock;
@property(nonatomic) BOOL sourceSupportsFiltering; // @synthesize sourceSupportsFiltering=_sourceSupportsFiltering;
@property(nonatomic) BOOL retrievesSourcePropertiesAtFetch; // @synthesize retrievesSourcePropertiesAtFetch=_retrievesSourcePropertiesAtFetch;
@property(copy, nonatomic) NSSet *sourcePropertyNames; // @synthesize sourcePropertyNames=_sourcePropertyNames;
@property(nonatomic) BOOL allowsDefaultValue; // @synthesize allowsDefaultValue=_allowsDefaultValue;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *propertyValueClassName; // @synthesize propertyValueClassName=_propertyValueClassName;
@property(nonatomic) NSUInteger propertyType; // @synthesize propertyType=_propertyType;
@property(copy, nonatomic) NSString *sortAsName; // @synthesize sortAsName=_sortAsName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)_updateSourceSupportsFiltering;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

