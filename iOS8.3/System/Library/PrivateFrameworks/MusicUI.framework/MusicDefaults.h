/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:47:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUApplicationDefaults.h>

@class NSArray;

@interface MusicDefaults : MPUApplicationDefaults

@property (assign,nonatomic) char lastEffectiveRadioExplicitTracksEnabled; 
@property (nonatomic,readonly) int eqPreset; 
@property (getter=isActivityContinuationEnabled,nonatomic,readonly) char activityContinuationEnabled; 
@property (getter=isGroupByAlbumArtistEnabled,nonatomic,readonly) char groupByAlbumArtistEnabled; 
@property (getter=areLyricsAndPodcastInfoEnabled,nonatomic,readonly) char lyricsAndPodcastInfoEnabled; 
@property (getter=isPinningEnabled,nonatomic,readonly) char pinningEnabled; 
@property (assign,nonatomic) unsigned playbackSpeed; 
@property (assign,nonatomic) unsigned repeatType; 
@property (getter=isShakeToShuffleEnabled,nonatomic,readonly) char shakeToShuffleEnabled; 
@property (getter=isShowCloudMediaEnabled,nonatomic,readonly) char showCloudMediaEnabled; 
@property (getter=isSortByArtistEnabled,nonatomic,readonly) char sortByArtistEnabled; 
@property (getter=isSoundCheckEnabled,nonatomic,readonly) char soundCheckEnabled; 
@property (assign,nonatomic) unsigned shuffleType; 
@property (nonatomic,copy) NSArray * tabBarOrdering; 
@property (assign,getter=isGeniusUserEnabled,nonatomic) char geniusUserEnabled; 
+(id)sharedDefaults;
-(unsigned)repeatType;
-(unsigned)shuffleType;
-(void)setRepeatType:(unsigned)arg1 ;
-(void)setShuffleType:(unsigned)arg1 ;
-(unsigned)playbackSpeed;
-(void)setPlaybackSpeed:(unsigned)arg1 ;
-(int)eqPreset;
-(char)isGroupByAlbumArtistEnabled;
-(char)isGeniusUserEnabled;
-(char)isSoundCheckEnabled;
-(char)areLyricsAndPodcastInfoEnabled;
-(char)isSortByArtistEnabled;
-(void)setTabBarOrdering:(NSArray *)arg1 ;
-(char)isActivityContinuationEnabled;
-(char)isPinningEnabled;
-(char)isShakeToShuffleEnabled;
-(char)isShowCloudMediaEnabled;
-(NSArray *)tabBarOrdering;
-(void)setGeniusUserEnabled:(char)arg1 ;
-(void)beginObservingDefaultsChanges;
-(void)ensureInvertedDefaultPlaybackSpeedHackIsInPlace;
-(void)migrateTabBarOrderingIfNeeded;
-(char)lastEffectiveRadioExplicitTracksEnabled;
-(void)setLastEffectiveRadioExplicitTracksEnabled:(char)arg1 ;
@end
