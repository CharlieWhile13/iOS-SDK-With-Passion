//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSEntityMigrationPolicy.h>

@interface CoreThemeAlignmentMigrationPolicy : NSEntityMigrationPolicy
{
}

- (BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id )arg3;
- (BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id )arg4;
- (BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id )arg4;
- (BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id )arg3;

@end

