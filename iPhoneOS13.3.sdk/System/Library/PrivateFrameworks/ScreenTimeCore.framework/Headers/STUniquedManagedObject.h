//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface STUniquedManagedObject : NSManagedObject
{
}

- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *externalClassName;
- (void)updateUniqueIdentifier;
- (id)computeUniqueIdentifier;
- (void)awakeFromInsert;

@end

