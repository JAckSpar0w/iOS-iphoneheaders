/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:30:45 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group, MFLibraryContentIndexDataSource;
#import <Message/Message-Structs.h>
@class NSObject, NSString, NSMutableArray, NSMutableIndexSet, _MFContentIndexWrapper, _MFLibraryContentIndexResultsCache;

@interface MFLibraryContentIndex : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	NSString* _indexName;
	double _startNonIdle;
	int _state;
	NSMutableArray* _pendingIndexableItems;
	NSMutableIndexSet* _pendingRemovals;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _indexingQueue;
	unsigned _throttledBatchSize;
	id<MFLibraryContentIndexDataSource> _dataSource;
	NSObject*<OS_dispatch_queue> _dataSourceQueue;
	NSObject*<OS_dispatch_queue> _utilityPriorityQueue;
	NSObject*<OS_dispatch_queue> _foregroundPriorityQueue;
	_MFContentIndexWrapper* _contentIndexWrapper;
	int _invalidated;
	_MFLibraryContentIndexResultsCache* _resultsCache;
	unsigned _isForeground : 1;
	unsigned _refreshing : 1;
	unsigned _shouldReopen : 1;
	unsigned _processPendingChangesScheduled : 1;

}
-(void)refresh;
-(void)dealloc;
-(void)applicationWillSuspend;
-(void)suspend;
-(void)resume;
-(void)setTargetQueue:(id)arg1 ;
-(id)documentIdentifiersMatchingCriterion:(id)arg1 mailboxIDs:(id)arg2 ;
-(char)isSearchable;
-(id)initWithPath:(id)arg1 indexName:(id)arg2 dataSource:(id)arg3 ;
-(void)invalidateAndWait;
-(void)applicationWillResume;
-(void)indexItems:(id)arg1 ;
-(void)removeItemsWithDocumentIdentifiers:(id)arg1 ;
-(void)_updateDataSourceQueueTargetIsForeground:(char)arg1 ;
-(void)_markInvalidated;
-(void)_transitionToNextStatePaused:(char)arg1 ;
-(void)scheduleProcessPendingItems;
-(id)_copyContentIndex_indexingQueue;
-(void)_processIndexingBatch:(CXIndexRef)arg1 ;
-(void)_processRemovals:(CXIndexRef)arg1 ;
-(void)forceReopen;
-(void)_processRefreshRequest;
-(void)_transitionToNextState;
-(id)_copyContentIndex;
-(CXQueryNodeRef)_createQueryNodeFromCriterion:(id)arg1 ;
-(CXQueryNodeRef)_createQueryNodeFromMailboxIDs:(id)arg1 ;
-(CXQueryRef)_createQueryFromCriterion:(id)arg1 mailboxIDs:(id)arg2 contentIndex:(CXIndexRef)arg3 ;
-(id)_indexFullPath;
-(void)_dataSourceInvalidateItemsGreaterThanTransactionId:(unsigned)arg1 ;
-(id)_consumeBatchOfSize:(unsigned)arg1 ;
-(unsigned)_addItem:(id)arg1 toContentIndex:(CXIndexRef)arg2 ;
-(void)_dataSourceAssignTransactionIdentifier:(unsigned)arg1 forDocumentIdentifiers:(id)arg2 ;
-(void)_invalidateResultsCache;
-(void)_dataSourceIndexItemsNeedingRefreshWithLimit:(unsigned)arg1 ;
-(void)wait;
@end
