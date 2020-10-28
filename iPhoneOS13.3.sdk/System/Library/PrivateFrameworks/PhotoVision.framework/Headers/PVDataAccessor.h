//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PVPersistenceDelegate;

@interface PVDataAccessor : NSObject
{
    unsigned int _faceAlgorithmUmbrellaVersion;
    unsigned int _sceneAlgorithmUmbrellaVersion;
    id <PVPersistenceDelegate> _persistenceDelegate;
}

@property(nonatomic) unsigned int sceneAlgorithmUmbrellaVersion; // @synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion;
@property(nonatomic) unsigned int faceAlgorithmUmbrellaVersion; // @synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion;
@property(retain, nonatomic) id <PVPersistenceDelegate> persistenceDelegate; // @synthesize persistenceDelegate=_persistenceDelegate;
// - (void).cxx_destruct;
- (BOOL)deleteEmptyGroupsAndReturnError:(id )arg1;
- (BOOL)resetLibraryClustersWithCanceler:(id)arg1 error:(id )arg2;
- (BOOL)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id )arg2;
- (id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(BOOL)arg2 error:(id )arg3;
- (id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id )arg2;
- (id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(BOOL)arg2 error:(id )arg3;
- (id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id )arg2;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(NSUInteger)arg1 error:(id )arg2;
- (id)allAlgorithmicFaceGroups:(id )arg1;
- (NSUInteger)countOfAlgorithmicFaceGroups;
- (id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id )arg2;
- (id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id )arg2;
- (id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id )arg2;
- (id)facesForPersonWithLocalIdentifier:(id)arg1 error:(id )arg2;
- (id)personWithFaceLocalIdentifier:(id)arg1 error:(id )arg2;
- (id)personsForLocalIdentifiers:(id)arg1 error:(id )arg2;
- (id)personForLocalIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)persistGeneratedFaceCrops:(id)arg1 error:(id )arg2;
- (id)activeFaceprintsByFaceLocalIdentifiers:(id)arg1 error:(id )arg2;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id )arg3;
- (BOOL)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id )arg2;
- (id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned int)arg2;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2;
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(BOOL)arg3 groupingIdentifiers:(id)arg4;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id )arg1;
- (NSUInteger)countOfClusteredFacesWithClusterSequenceNumbersInRange:(NSRange)arg1;
- (NSUInteger)countOfClusteredFaces;
- (NSUInteger)countOfClusteringEligibleFaces;
- (NSUInteger)countOfFaces;

@end

