/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:41:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCDQueryDataSource.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface MCDPlaylistsDataSource : MCDQueryDataSource {

	char _hasParentPlaylist;
	NSCache* _cachedDurations;
	NSCache* _cachedCounts;
	NSCache* _cachedRepresentativeItems;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)resetCaches;
-(id)initWithQuery:(id)arg1 entityType:(int)arg2 ;
-(char)showsIndexBar;
-(double)cachedDurationForEntityAtIndex:(unsigned)arg1 ;
-(char)isFolderForEntityAtIndex:(unsigned)arg1 ;
-(unsigned)cachedCountForEntityAtIndex:(unsigned)arg1 ;
-(id)cachedRepresentativeItemForEntityAtIndex:(unsigned)arg1 ;
-(id)_representativePlaylistForEntityAtIndex:(unsigned)arg1 ;
-(char)canEditEntityAtIndex:(unsigned)arg1 ;
-(void)_breadthFirstVisitNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitor:(/*^block*/id)arg2 ;
-(void)_bfsNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitedPlaylistPIDs:(id)arg2 stop:(char*)arg3 visitor:(/*^block*/id)arg4 ;
-(double)durationForEntityAtIndex:(unsigned)arg1 ;
-(unsigned)countForEntityAtIndex:(unsigned)arg1 ;
-(id)representativeItemForEntityAtIndex:(unsigned)arg1 ;
-(void)deleteEntityAtIndex:(unsigned)arg1 ;
-(void)_invalidateCalculatedEntities;
-(int)editingTypeForEntityAtIndex:(unsigned)arg1 ;
-(char)entityIsNowPlayingAtIndex:(unsigned)arg1 ;
@end
