/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BRQueryItem, NSObject, NSProgress;

@interface BRQueryItemProgressObserver : NSObject {

	BRQueryItem* _item;
	NSObject*<OS_dispatch_queue> _queue;
	id _subscriber;
	NSProgress* _progress;
	BOOL _stopped;
	BOOL _isUpload;
	/*^block*/id _progressHandler;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) BRQueryItem * item;                            //@synthesize item=_item - In the implementation block
-(id)progressHandler;
-(void)dealloc;
-(id)description;
-(BRQueryItem *)item;
-(id)initWithItem:(id)arg1 ;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)stop;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
