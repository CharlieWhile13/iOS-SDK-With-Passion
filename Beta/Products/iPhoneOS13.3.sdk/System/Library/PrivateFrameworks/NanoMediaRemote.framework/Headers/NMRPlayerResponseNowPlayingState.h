/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRPlayerResponseNowPlayingState : NMRNowPlayingState <NSCopying> {
    MPCPlayerResponse * _playerResponse;
}

@property (nonatomic, readonly) MPCPlayerResponse *playerResponse;

- (void).cxx_destruct;
- (id)_nowPlayingRadioStation;
- (id)_nowPlayingSong;
- (id)album;
- (id)applicationBundleIdentifier;
- (id)applicationDisplayName;
- (id)artist;
- (id)artworkCatalog;
- (long long)banCommandPresentationStyle;
- (id)collectionTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (double)elapsedTimeAtLastUpdate;
- (double)fastForwardTimeInterval;
- (bool)hasNowPlayingItem;
- (bool)hasUpNextQueue;
- (id)identifiers;
- (id)initWithPlayerResponse:(id)arg1;
- (bool)isAdvertisement;
- (bool)isAlwaysLive;
- (bool)isBanCommandEnabled;
- (bool)isBanCommandSupported;
- (bool)isBannedActive;
- (bool)isBookmarkCommandEnabled;
- (bool)isBookmarkCommandSupported;
- (bool)isBookmarkedActive;
- (bool)isExplicitTrack;
- (bool)isLikeCommandEnabled;
- (bool)isLikeCommandSupported;
- (bool)isLikedActive;
- (bool)isNextTrackCommandEnabled;
- (bool)isPlaybackRateCommandSupported;
- (bool)isPreviousTrackCommandEnabled;
- (bool)isRepeatModeCommandSupported;
- (bool)isShuffleModeCommandSupported;
- (bool)isSkipBackwardCommandEnabled;
- (bool)isSkipForwardCommandEnabled;
- (id)itemAlbumPersistentID;
- (id)itemCompanionPersistentID;
- (id)itemPersistentID;
- (long long)likeCommandPresentationStyle;
- (id)localizedBanTitle;
- (id)localizedBookmarkTitle;
- (id)localizedLikeTitle;
- (float)playbackRate;
- (unsigned int)playbackState;
- (id)playerResponse;
- (float)preferredPlaybackRate;
- (id)radioStationHash;
- (id)radioStationIdentifier;
- (id)radioStationName;
- (int)repeatMode;
- (double)rewindTimeInterval;
- (int)shuffleMode;
- (id)storeAdamID;
- (id)timestamp;
- (id)title;

@end
